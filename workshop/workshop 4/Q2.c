#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  float a , b , c ,d ;
  int check1 = scanf ("%f %f",&a,&b);
  int check2 = scanf ("%f %f",&c,&d);
  float result = (float)(sqrt(pow((c-a),2)+pow((d-b),2)));

  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  if (check1 !=2 || check2 !=2 ){
  	printf ("Invalid input");
  	return 0;
  }else {
  	printf ("%.4f",result);
  }
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  printf("\n");
  system ("pause");
  return(0);
}
