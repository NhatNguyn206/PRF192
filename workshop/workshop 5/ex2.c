#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void reverse(char *str){
    char *start = str;
    char *end = str + strlen(str) - 1;
    char temp;

    while(start < end){
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main(){
	system("cls");
	printf("\nINPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
   	char str[1000];
    fgets(str, 1000, stdin);
    str[strcspn(str,"\n")] = '\0';
 // Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
 	reverse(str);
	printf ("%s",str);
    return 0;
}