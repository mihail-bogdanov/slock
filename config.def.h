/* user and group to drop privileges to */
static const char *user  = "mihail";
static const char *group = "mihail";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#131C26",   /* during input */
	[FAILED] = "#FF6E67",   /* wrong password */
	[CAPS] = "FF6E67",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* allow control key to trigger fail on clear */
static const int controlkeyclear = 1;

/* default message */
static const char * message = "Lo schermo è bloccato. Immettere la Password.";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "-xos4-terminus-medium-r-normal--14-140-72-72-c-80-iso10646-1";
