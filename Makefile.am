AUTOMAKE_OPTIONS = subdir-objects
ACLOCAL_AMFLAGS = ${ACLOCAL_FLAGS}

bin_PROGRAMS = st

st_SOURCES = \
	src/st.c \
	src/x.c \
	src/boxdraw.c \
	src/hb.c \
	src/arg.h \
	src/st.h \
	src/win.h \
	src/hb.h \
	src/boxdraw_data.h

X11INC = /usr/X11R6/include
X11LIB = /usr/X11R6/lib

st_CFLAGS  = -I$(X11INC) \
			 $(XFT_CFLAGS) $(FONTCONFIG_CFLAGS) $(FREETYPE_CFLAGS) $(HARFBUZZ_CFLAGS)

st_LDADD   = -L$(X11LIB) -lm -lrt -lX11 -lutil -lXft -lXrender\
			 $(XFT_LIBS) $(FONTCONFIG_LIBS) $(FREETYPE_LIBS) $(HARFBUZZ_LIBS)

BUILT_SOURCES = config.h
CLEANFILES = src/config.h

config.h: $(srcdir)/config.def.h
	cp $(srcdir)/config.def.h src/config.h
