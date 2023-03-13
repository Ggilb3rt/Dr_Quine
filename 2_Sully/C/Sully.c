#include <stdio.h>
#include <stdlib.h>
int main(void){int i = 5;if(i + 1){
	char *a="#include <stdio.h>%c#include <stdlib.h>%cint main(void){int i = %d;if(i + 1){%c%cchar *a=%c%s%c;%c%cchar child_name[10]; char cmd_exec_child[100]; FILE *child_file;%c%csprintf(child_name, %cSully_%%d.c%c, i); child_file = fopen(child_name, %cwx%c);%c%cif (child_file != ((void *)0)){i--;%c%c%cfprintf(child_file, a, 10, 10, i, 10, 9, 34, a, 34, 10, 9, 10, 9, 34, 34, 34, 34, 10, 9, 10, 9, 9, 10, 9, 9, 34, 34, 10, 9, 9, 10); fclose(child_file);%c%c%csprintf(cmd_exec_child, %cgcc %%s -o Sully_child_%%d;./Sully_child_%%d;%c, child_name, i, i);%c%c%cif (i + 1) system(cmd_exec_child);}%c}return (0);}";
	char child_name[10]; char cmd_exec_child[100]; FILE *child_file;
	sprintf(child_name, "Sully_%d.c", i);
	child_file = fopen(child_name, "wx");
	if (child_file != ((void *)0)){
		i--;
		fprintf(child_file, a, 10, 10, i, 10, 9, 34, a, 34, 10, 9, 10, 9, 34, 34, 34, 34, 10, 9, 10, 9, 9, 10, 9, 9, 34, 34, 10, 9, 9, 10); fclose(child_file);
		sprintf(cmd_exec_child, "gcc %s -o Sully_child_%d;./Sully_child_%d;", child_name, i, i);
		if (i + 1) system(cmd_exec_child);}
}return (0);}