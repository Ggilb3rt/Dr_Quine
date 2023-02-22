#include <stdio.h>
int goToZero(int nb) {return (nb == 0) ? 0 : nb - 1;}
int main(void) {
/*
	Comment in
*/
	char *a = "#include <stdio.h>%cint goToZero(int nb) {return (nb == 0) ? 0 : nb - 1;}%cint main(void) {%c/*%c%cComment in%c*/%c%cchar *a = %c%s%c;%c%cprintf(a, 10, 10, 10, 10, 9, 10, 10, 9, 34, a, 34, 10, 9, 10, 9, 10);%c%cgoToZero(8);%c}//Comment out";
	printf(a, 10, 10, 10, 10, 9, 10, 10, 9, 34, a, 34, 10, 9, 10, 9, 10);
	goToZero(8);
}//Comment out