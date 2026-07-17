# st version
VERSION = 0.8.4

# --------------------------------------------------------------------
# Theme
# --------------------------------------------------------------------

# Available themes:
# CLASSIC, MATRIX, DRACULA, NORD, GRUVBOX,
# SOLARIZED_DARK, TOKYO_NIGHT, AMBER
#
# Override from the command line:
#   make clean
#   make THEME=NORD
THEME ?= MATRIX

THEMES := \
	CLASSIC \
	MATRIX \
	DRACULA \
	NORD \
	GRUVBOX \
	SOLARIZED_DARK \
	TOKYO_NIGHT \
	AMBER

# Reject unknown theme names.
ifeq ($(filter $(THEME),$(THEMES)),)
$(error Invalid theme '$(THEME)'. Available themes: $(THEMES))
endif

# --------------------------------------------------------------------
# Installation paths
# --------------------------------------------------------------------

PREFIX    ?= /usr/local
MANPREFIX ?= $(PREFIX)/share/man

X11INC ?= /usr/X11R6/include
X11LIB ?= /usr/X11R6/lib

# --------------------------------------------------------------------
# Dependencies
# --------------------------------------------------------------------

PKG_CONFIG ?= pkg-config

PACKAGES := fontconfig freetype2 harfbuzz

PKG_CFLAGS := $(shell $(PKG_CONFIG) --cflags $(PACKAGES))
PKG_LIBS   := $(shell $(PKG_CONFIG) --libs $(PACKAGES))

INCS := \
	-I$(X11INC) \
	$(PKG_CFLAGS)

LIBS := \
	-L$(X11LIB) \
	-lm \
	-lrt \
	-lX11 \
	-lutil \
	-lXft \
	-lXrender \
	$(PKG_LIBS)

# --------------------------------------------------------------------
# Compiler and linker
# --------------------------------------------------------------------

CC ?= cc

CPPFLAGS += \
	-DVERSION=\"$(VERSION)\" \
	-D_XOPEN_SOURCE=600

# CLASSIC is selected automatically when no theme macro is defined.
ifneq ($(THEME),CLASSIC)
CPPFLAGS += -D$(THEME)
endif

CFLAGS += \
	-std=c99 \
	-O2 \
	-Wall \
	-Wextra \
	-Wpedantic

STCPPFLAGS := $(CPPFLAGS)
STCFLAGS   := $(INCS) $(STCPPFLAGS) $(CFLAGS)
STLDFLAGS  := $(LDFLAGS) $(LIBS)

# --------------------------------------------------------------------
# OpenBSD example
# --------------------------------------------------------------------

# CPPFLAGS += -D_BSD_SOURCE
# LIBS := \
#	-L$(X11LIB) \
#	-lm \
#	-lX11 \
#	-lutil \
#	-lXft \
#	$(shell $(PKG_CONFIG) --libs fontconfig freetype2)
