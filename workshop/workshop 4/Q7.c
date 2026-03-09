#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	int check = scanf ("%d",&n);

  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if ( check !=1){
  	printf ("Invalid input");
  	return 0;
  }
  	for (int i=1; i<=n;i++){
		for (int j=1;j<=n-i;j++){   // in khoảng trắng
			printf (" ");
		}
		for (int k=1;k<=2*i-1;k++){    // in sao ra màn
			printf ("*");
		}
		printf("\n");
	}
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
