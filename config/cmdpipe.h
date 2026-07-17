#define URL_MENU_FONT       "Droid Sans Mono-25"
#define URL_MENU_LINES      "52"
#define URL_MENU_NORMAL_FG  "yellow"
#define URL_MENU_NORMAL_BG  "black"
#define URL_MENU_SELECTED_FG "black"
#define URL_MENU_SELECTED_BG "white"

#define URL_MENU_COMMAND                                              \
    "url=$(xurls | sort -u | "                                        \
    "dmenu -i -l " URL_MENU_LINES                                     \
    " -fn '" URL_MENU_FONT "'"                                        \
    " -nf '" URL_MENU_NORMAL_FG "'"                                   \
    " -nb '" URL_MENU_NORMAL_BG "'"                                   \
    " -sf '" URL_MENU_SELECTED_FG "'"                                 \
    " -sb '" URL_MENU_SELECTED_BG "'); "                              \
    "[ -n \"$url\" ] && exec xdg-open \"$url\""

static char* openurlcmd[] = {
    "/bin/sh",
    "-c",
    URL_MENU_COMMAND,
    "st-open-url",
    NULL
};


/*
static char* openurlcmd[] = {"/bin/sh", "-c",
                             "xurls| dmenu -i -l 52 -fn 'Droid Sans Mono-25' -nf yellow -nb black -sf black -sb white| sort |uniq|xargs -r xdg-open",
                             "externalpipe", NULL
                            };

*/

/*

#define DMENU_URL_STYLE \
    "-i -l 52 " \
    "-fn 'Droid Sans Mono-25' " \
    "-nf yellow -nb black " \
    "-sf black -sb white"

static char *openurlcmd[] = {
    "/bin/sh",
    "-c",
    "url=$(xurls | sort -u | dmenu " DMENU_URL_STYLE "); "
    "[ -n \"$url\" ] && exec xdg-open \"$url\"",
    "st-open-url",
    NULL
};

*/
