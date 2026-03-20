#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int findDifference(int arr[], int n) {
//@STUDENT:ADD YOUR CODE
	int max = arr[0];
	int min = arr [0];
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
	int kq=abs(max - min);
	return kq;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("INPUT:\n");
  int n;
  scanf ("%d",&n);
  int a[n];
   for (int i = 0; i < n; i++){
   	scanf ("%d",&a[i]);
   }
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  int result = findDifference(a,n);
  
	printf ("%d",result);
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
