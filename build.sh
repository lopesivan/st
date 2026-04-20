#!/usr/bin/env bash

n=$1

font="$(fc-list : family | cut -f1 -d"," | sort | uniq | fzf)"

[[ $font ]] || exit 2

echo "=${font}="
cp config.def.orig.h config.def.h

font_size1=23
font_size2=$((font_size1 + 2))
sed "s/__FONT_NAME__:pixelsize=27/__FONT_NAME__:pixelsize=${font_size1}/" -i config.def.h
sed "s/NotoColorEmoji:pixelsize=25/NotoColorEmoji:pixelsize=${font_size2}/" -i config.def.h

sed "s/__FONT_NAME__/${font}/" -i config.def.h
grep '^static char \*font =' config.def.h
make clean
make
n=$(ls st.* | sort -V -r | head -1 | cut -d'.' -f 2)
cp st st.$((++n))
echo "$n : $font" | tee -a LOGS

exit 0
