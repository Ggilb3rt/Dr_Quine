#include <stdio.h>
#define FT(FT) int main(){ FILE *fd = fopen("Grace_kid.c", "wx"); if(fd != ((void *)0)){char *a = "#include <stdio.h>\n#define FT(FT) " FT "\n#define STR(x) #x\n#define SHOW_ME(x) STR(x)\n/*\n\tHello there !\n*/\nFT(SHOW_ME(FT(FT)))";fprintf(fd, "%s", a);fclose(fd);}return 0;}
#define STR(x) #x
#define SHOW_ME(x) STR(x)
/*
	Hello there !
*/
FT(SHOW_ME(FT(FT)))