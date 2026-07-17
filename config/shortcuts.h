static Shortcut shortcuts[] = {
    /* mask        keysym        function       argument */
    {XK_ANY_MOD, XK_Break, sendbreak, {.i = 0}},
    
    /* zoom: Alt+= aumenta, Alt+- diminui, Alt+Home reseta */
    {MODKEY, XK_equal, zoom, {.f = +1}},
    {MODKEY, XK_minus, zoom, {.f = -1}},
    {MODKEY, XK_Home, zoomreset, {.f = 0}},
    
    /* opacidade: Ctrl+Shift+Up aumenta, Ctrl+Shift+Down diminui */
    {TERMMOD, XK_Up, changealpha, {.f = +0.05}},
    {TERMMOD, XK_Down, changealpha, {.f = -0.05}},
    
    /* clipboard: Alt+c copia, Alt+v cola, Shift+Insert cola seleção */
    {MODKEY, XK_c, clipcopy, {.i = 0}},
    {MODKEY, XK_v, clippaste, {.i = 0}},
    {ShiftMask, XK_Insert, selpaste, {.i = 0}},
    
    {TERMMOD, XK_Num_Lock, numlock, {.i = 0}},
    
    /* links: Alt+l lista e abre, Alt+u copia URL */
    {MODKEY, XK_l, externalpipe, {.v = openurlcmd}},
    {MODKEY, XK_u, copyurl, {.i = 0}},
    
    /* scroll: Ctrl+Shift+k sobe, Ctrl+Shift+j desce (sem conflito com nvim) */
    {TERMMOD, XK_k, kscrollup, {.i = 1}},
    {TERMMOD, XK_j, kscrolldown, {.i = 1}},
};

