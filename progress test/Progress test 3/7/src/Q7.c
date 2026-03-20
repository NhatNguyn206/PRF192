#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int isPrime(int n) {
   for (int i = 2; i <= sqrt(n); i++){
       if (n % i == 0){
           return 0;
       }
   }
   return n > 1;
}

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	int count =0;
	scanf ("%d",&n);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
for (int i = n; count < 4; i++) {
    if (isPrime(i)) {
        printf("%d\n", i);
        count++;
    }
}
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
