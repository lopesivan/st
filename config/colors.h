#ifndef ST_COLORS_H
#define ST_COLORS_H

/*
 * Seletor de temas em tempo de compilacao.
 *
 * Exemplos:
 *   make clean && make CFLAGS="${CFLAGS} -DMATRIX"
 *   make clean && make CFLAGS="${CFLAGS} -DNORD"
 *
 * Se nenhuma macro for definida, o tema CLASSIC sera utilizado.
 */
#if (defined(MATRIX)         + defined(DRACULA)      + \
     defined(NORD)           + defined(GRUVBOX)      + \
     defined(SOLARIZED_DARK) + defined(TOKYO_NIGHT)  + \
     defined(AMBER)) > 1
#error "Defina somente um tema de cores por compilacao"
#endif

#if defined(MATRIX)

#define THEME_NAME "Matrix"
#define THEME_ALPHA 0.88
#define C00 "#001100"
#define C01 "#006600"
#define C02 "#00cc44"
#define C03 "#66cc00"
#define C04 "#008833"
#define C05 "#00aa55"
#define C06 "#00cc88"
#define C07 "#99ffbb"
#define C08 "#005522"
#define C09 "#00aa33"
#define C10 "#00ff55"
#define C11 "#99ff33"
#define C12 "#00cc66"
#define C13 "#33ff88"
#define C14 "#33ffaa"
#define C15 "#ddffe6"
#define CFG "#00ff55"
#define CCS "#ccffcc"
#define CBG "#001400"
#define CRC "#001400"

#elif defined(DRACULA)

#define THEME_NAME "Dracula"
#define THEME_ALPHA 0.92
#define C00 "#21222c"
#define C01 "#ff5555"
#define C02 "#50fa7b"
#define C03 "#f1fa8c"
#define C04 "#6272a4"
#define C05 "#ff79c6"
#define C06 "#8be9fd"
#define C07 "#f8f8f2"
#define C08 "#6272a4"
#define C09 "#ff6e6e"
#define C10 "#69ff94"
#define C11 "#ffffa5"
#define C12 "#d6acff"
#define C13 "#ff92df"
#define C14 "#a4ffff"
#define C15 "#ffffff"
#define CFG "#f8f8f2"
#define CCS "#ff79c6"
#define CBG "#282a36"
#define CRC "#282a36"

#elif defined(NORD)

#define THEME_NAME "Nord"
#define THEME_ALPHA 0.92
#define C00 "#3b4252"
#define C01 "#bf616a"
#define C02 "#a3be8c"
#define C03 "#ebcb8b"
#define C04 "#81a1c1"
#define C05 "#b48ead"
#define C06 "#88c0d0"
#define C07 "#e5e9f0"
#define C08 "#4c566a"
#define C09 "#bf616a"
#define C10 "#a3be8c"
#define C11 "#ebcb8b"
#define C12 "#81a1c1"
#define C13 "#b48ead"
#define C14 "#8fbcbb"
#define C15 "#eceff4"
#define CFG "#d8dee9"
#define CCS "#88c0d0"
#define CBG "#2e3440"
#define CRC "#2e3440"

#elif defined(GRUVBOX)

#define THEME_NAME "Gruvbox Dark"
#define THEME_ALPHA 0.92
#define C00 "#282828"
#define C01 "#cc241d"
#define C02 "#98971a"
#define C03 "#d79921"
#define C04 "#458588"
#define C05 "#b16286"
#define C06 "#689d6a"
#define C07 "#a89984"
#define C08 "#928374"
#define C09 "#fb4934"
#define C10 "#b8bb26"
#define C11 "#fabd2f"
#define C12 "#83a598"
#define C13 "#d3869b"
#define C14 "#8ec07c"
#define C15 "#ebdbb2"
#define CFG "#ebdbb2"
#define CCS "#fabd2f"
#define CBG "#282828"
#define CRC "#282828"

#elif defined(SOLARIZED_DARK)

#define THEME_NAME "Solarized Dark"
#define THEME_ALPHA 0.92
#define C00 "#073642"
#define C01 "#dc322f"
#define C02 "#859900"
#define C03 "#b58900"
#define C04 "#268bd2"
#define C05 "#d33682"
#define C06 "#2aa198"
#define C07 "#eee8d5"
#define C08 "#002b36"
#define C09 "#cb4b16"
#define C10 "#586e75"
#define C11 "#657b83"
#define C12 "#839496"
#define C13 "#6c71c4"
#define C14 "#93a1a1"
#define C15 "#fdf6e3"
#define CFG "#839496"
#define CCS "#b58900"
#define CBG "#002b36"
#define CRC "#002b36"

#elif defined(TOKYO_NIGHT)

#define THEME_NAME "Tokyo Night"
#define THEME_ALPHA 0.92
#define C00 "#15161e"
#define C01 "#f7768e"
#define C02 "#9ece6a"
#define C03 "#e0af68"
#define C04 "#7aa2f7"
#define C05 "#bb9af7"
#define C06 "#7dcfff"
#define C07 "#a9b1d6"
#define C08 "#414868"
#define C09 "#f7768e"
#define C10 "#9ece6a"
#define C11 "#e0af68"
#define C12 "#7aa2f7"
#define C13 "#bb9af7"
#define C14 "#7dcfff"
#define C15 "#c0caf5"
#define CFG "#c0caf5"
#define CCS "#7aa2f7"
#define CBG "#1a1b26"
#define CRC "#1a1b26"

#elif defined(AMBER)

#define THEME_NAME "Amber CRT"
#define THEME_ALPHA 0.90
#define C00 "#1a1000"
#define C01 "#cc5500"
#define C02 "#d48a00"
#define C03 "#ffb000"
#define C04 "#b87300"
#define C05 "#dd7700"
#define C06 "#ee9900"
#define C07 "#ffd080"
#define C08 "#664400"
#define C09 "#ff6600"
#define C10 "#ffaa00"
#define C11 "#ffc040"
#define C12 "#dd8800"
#define C13 "#ff9933"
#define C14 "#ffbb55"
#define C15 "#fff0cc"
#define CFG "#ffb000"
#define CCS "#fff0cc"
#define CBG "#1a1000"
#define CRC "#1a1000"

#else /* CLASSIC */

#define THEME_NAME "Classic"
#define THEME_ALPHA 0.85
#define C00 "#1a1a1a"
#define C01 "#cc3333"
#define C02 "#33cc33"
#define C03 "#ccaa00"
#define C04 "#3399cc"
#define C05 "#cc33cc"
#define C06 "#33cccc"
#define C07 "#cccccc"
#define C08 "#555555"
#define C09 "#ff5555"
#define C10 "#55ff55"
#define C11 "#ffff55"
#define C12 "#5599ff"
#define C13 "#ff55ff"
#define C14 "#55ffff"
#define C15 "#ffffff"
#define CFG "#cccccc"
#define CCS "#ff00af"
#define CBG "#111111"
#define CRC "#00ff87"

#endif

/* Opacidade do fundo para o tema selecionado. */
float alpha = THEME_ALPHA;

/* As primeiras 16 posicoes sao as cores ANSI do terminal. */
static const char *colorname[] = {
    C00, C01, C02, C03, C04, C05, C06, C07,
    C08, C09, C10, C11, C12, C13, C14, C15,

    [255] = NULL,

    CFG, /* 256: foreground     */
    CCS, /* 257: cursor         */
    CBG, /* 258: background     */
    CRC, /* 259: reverse cursor */
};

unsigned int defaultfg = 256;
unsigned int defaultbg = 258;
static unsigned int defaultcs = 257;
static unsigned int defaultrcs = 259;

#endif /* ST_COLORS_H */
