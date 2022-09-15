/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom */
static int opacity = 0;                     /* -o  option; if 0, then alpha is disabled */
static int center = 0;                      /* -c  option; if 0, dmenu won't be centered on the screen */
static int min_width = 500;                 /* minimum width when centered */
static const int vertpad = 10;              /* vertical padding of bar */
static const int sidepad = 10;              /* horizontal padding of bar */
/* -fn option overrides fonts[0]; default X11 font or font set */
static char *fonts[] =
{
	"FantasqueSansMono Nerd Font:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const unsigned int baralpha = 0xd0;
static const unsigned int borderalpha = OPAQUE;
static const unsigned int alphas[][3]      = {
	/*               fg      bg        border     */
	[SchemeNorm] = { OPAQUE, baralpha, borderalpha },
	[SchemeSel]  = { OPAQUE, baralpha, borderalpha },
	[SchemeBorder] = { OPAQUE, OPAQUE, OPAQUE },
	[SchemeMid] = { OPAQUE, baralpha, borderalpha },
	[SchemeHp] = { OPAQUE, baralpha, borderalpha },
};

static
char *colors[][2] = {
	/*               fg         bg       */
	[SchemeNorm] = { "#a6adc8", "#1e1e2e" },
	[SchemeSel]  = { "#1e1e2e", "#5e5b87" },
	[SchemeOut]  = { "#1e1e2e", "#94e2d5" },
	[SchemeBorder] = { "#1e1e2e", "#f385a8" },
	[SchemeMid]  = { "#1e1e2e", "#f385a8" },
	[SchemeHp]   = { "#a6adc8", "#5e5b87" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -g option; if nonzero, dmenu uses a grid comprised of columns and lines */
static unsigned int columns    = 0;
static unsigned int lineheight = 0;         /* -h option; minimum height of a menu line     */
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 3;

