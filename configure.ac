AC_PREREQ([2.69])
AC_INIT([st], [0.8.4], [you@example.com])

AM_INIT_AUTOMAKE([foreign -Wall -Werror])
AC_CONFIG_SRCDIR([src/st.c])

# Verifica se o compilador C está disponível
AC_PROG_CC
AC_PROG_CC_C_O
AC_CANONICAL_HOST

# Usa pkg-config
PKG_CHECK_MODULES([XFT], [xft])
PKG_CHECK_MODULES([FONTCONFIG], [fontconfig])
PKG_CHECK_MODULES([FREETYPE], [freetype2])
PKG_CHECK_MODULES([HARFBUZZ], [harfbuzz])


# Exporta flags para Makefile
AC_SUBST([XFT_CFLAGS])
AC_SUBST([XFT_LIBS])
AC_SUBST([FONTCONFIG_CFLAGS])
AC_SUBST([FONTCONFIG_LIBS])
AC_SUBST([FREETYPE_CFLAGS])
AC_SUBST([FREETYPE_LIBS])
AC_SUBST([HARFBUZZ_CFLAGS])
AC_SUBST([HARFBUZZ_LIBS])


# Gera arquivos de saída
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
