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
	int sum=0;
	int kq=scanf ("%d",&n);
	
while (n != 0) {
    int temp = n % 10;
    sum += temp;
    n = n / 10;
}
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	if (n<0||kq!=1){
		printf ("-1");
		return 0;
	}
  printf ("%d",abs(sum));
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
