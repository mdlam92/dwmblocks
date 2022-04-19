//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/						     /*Update Interval*/		/*Update Signal*/

	{"CPU: ",    "cpu_temp.sh",								5,					0},
	{"MEM: ",    "free -mh | grep Mem | awk '{print $3, \"/\", $2}'",	5,		0},
	{"GPU: ",   "gpu_temp.sh",								5,					0},

	{"",        "date '+%Y-%m-%d %H:%M:%S'",				1,					0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
