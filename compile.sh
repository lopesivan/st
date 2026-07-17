#!/usr/bin/env bash
set -e # Encerra em caso de erro
set -u # Trata variáveis não definidas como erro
set -o pipefail

THEMES=(
    CLASSIC
    MATRIX
    DRACULA
    NORD
    GRUVBOX
    SOLARIZED_DARK
    TOKYO_NIGHT
    AMBER)

echo make clean
echo PKG_CONFIG_PATH=/usr/lib/x86_64-linux-gnu/pkgconfig bear -- make THEME=${THEMES[1]}

for t in ${THEMES[*]}; do
    make clean
    PKG_CONFIG_PATH=/usr/lib/x86_64-linux-gnu/pkgconfig bear -- make THEME=$t
    mv st st.${t,,}
done

exit 0
