#include <stdio.h>
#include <stdlib.h>

int main(void){
	int	i = 5;
	
	if (i >= 0){
		char	child_name[10];
		char	cmd_exec_child[100];
		FILE	*child_file;

		sprintf(child_name, "Sully_%d.c", i - 1);
		child_file = fopen(child_name, "wx");
		if (child_file != ((void *)0)){
			fprintf(child_file, "#include <stdio.h>\n#include <stdlib.h>\n\nint main(void){int i = %d; printf(%c%s%c, i);return (0);}", i - 1, 34, "Hello there %d!", 34);
			fclose(child_file);
			sprintf(cmd_exec_child, "bash clang -Werror -Wextra -Wall %s -o Sully_child", child_name);
			printf("%s\n", cmd_exec_child);
			system("ls -la");
			if (i > 0)
				// need uid
				if (system(cmd_exec_child))
					system("bash ./Sully_child");
		}
	}
	return (0);
}