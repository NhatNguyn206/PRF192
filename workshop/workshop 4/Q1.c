#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

	float a , b;
	int check = scanf ("%f%f",&a,&b);
	float result = (float)cbrt(pow(a,2)+pow(b,2));
  
  
  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if (check != 2){
  	printf ("Invalid input");
  	return 0;
  }
  printf ("%.2f",result);
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
