//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

        {"  ", "./scripts/crypto",                                             3600,           0},

	{"❯ ", "uname -r",							0,		0},

	{"", "./scripts/vol",							10,		0},

	{"", "./scripts/net",							10,		0},

	{"🕒 ", "date '+%a %b %d %I:%M%p'",					60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
