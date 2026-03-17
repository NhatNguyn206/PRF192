#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char find, replace;
    int i = 0, count = 0;
    system("cls");
	printf("\nINPUT:\n");
 	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
 	fgets(str, 1000, stdin);
    str[strcspn(str, "\n")] = '\0';
	scanf ("%c\n",&find);
	scanf ("%c",&replace);
	while (str[i] != '\0') {
        if (str[i] == find) {
            str[i] = replace;  // thay
            count++;           // tang s? l?n
        }
        i++;
    }
    printf("\nOUTPUT:\n");
  //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
  	printf ("%d\n",count);
  	printf ("%s",str);
return 0;
}