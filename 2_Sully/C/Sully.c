#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void){
	int i = 5;
	if(i + 1){
	char *a="#include <stdio.h>%1$c#include <stdlib.h>%1$c#include <unistd.h>%1$cint main(void){%1$c%3$cint i = %4$d;%1$c%3$cif(i + 1){%1$c%3$cchar *a=%2$c%5$s%2$c;%1$c%3$cchar child_name[10]; char cmd_exec_child[100]; FILE *child_file;%1$c%3$cif (access(%2$cSully_5.c%2$c, R_OK) != -1) i--;%1$c%3$csprintf(child_name, %2$cSully_%%d.c%2$c, i);%1$c%3$cchild_file = fopen(child_name, %2$cwx%2$c);%1$c%3$cif (child_file != ((void *)0)){%1$c%3$c%3$cfprintf(child_file, a, 10, 34, 9, i, a); fclose(child_file);%1$c%3$c%3$csprintf(cmd_exec_child, %2$cgcc %%s -o Sully_%%d;./Sully_%%d;%2$c, child_name, i, i);%1$c%3$c%3$cif (i) system(cmd_exec_child);%1$c%3$c%3$celse system(%2$cgcc Sully_0.c -o Sully_0%2$c);}%1$c}return (0);}";
	char child_name[10]; char cmd_exec_child[100]; FILE *child_file;
	if (access("Sully_5.c", R_OK) != -1) i--;
	sprintf(child_name, "Sully_%d.c", i);
	child_file = fopen(child_name, "wx");
	if (child_file != ((void *)0)){
		fprintf(child_file, a, 10, 34, 9, i, a); fclose(child_file);
		sprintf(cmd_exec_child, "gcc %s -o Sully_%d;./Sully_%d;", child_name, i, i);
		if (i) system(cmd_exec_child);
		else system("gcc Sully_0.c -o Sully_0");}
}return (0);}