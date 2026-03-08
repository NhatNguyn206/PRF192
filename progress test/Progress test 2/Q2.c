#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// Function to check if a number is a prime number
int isPrime(int n) {
   for (int i = 2; i <= sqrt(n); i++){
       if (n % i == 0){
           return 0;
       }
   }
   return n > 1;
}
// Function to count prime numbers in an array
int countPrimes(int arr[], int size) {
    int count = 0;

    for (int i = 0; i < size; i++){
        if (isPrime(arr[i])){
            count++;
        }
    }
    return count;
}

int main() {
  system("cls");
	// Fixed Do not edit anything here.
  printf("INPUT:\n");
  int n;
  int invalid = 0;

  if (scanf("%d",&n) != 1 || n <= 0){
      invalid = 1;
  }
  int a[n];
  for (int i = 0; i < n; i++){
      scanf("%d",&a[i]);
  }
  // Fixed Do not edit anything here. 
  printf("\nOUTPUT:\n"); 
  //@STUDENT: WRITE YOUR OUTPUT HERE:

  if (invalid == 1){
      printf("Invalid input");
      return 0;
  }
  int result = countPrimes(a,n);
  printf("%d",result);
//--FIXED PART - DO NOT EDIT ANY THINGS HERE printf("\n");
  printf("\n");
  system("pause");
  return 0;
}