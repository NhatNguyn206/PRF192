#include <stdio.h>

int main() {
  	system("cls");
	printf("\nINPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char str[1000];
	int count =0;
    fgets(str, 1000, stdin);
    
    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
	printf ("%d",count);
 

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

