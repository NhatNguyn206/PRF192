#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int mark [10000000];
int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	int check = 0;
	if(scanf("%d",&n)!=1 || n<=0){
    printf("\nOUTPUT:\nInvalid input\n");
    return 0;
    }
	int a[n];
	for (int i=0;i<n;i++){
		scanf ("%d",&a[i]);
	}
	
	for (int i=0;i<n;i++){
		if (a[i]%2==0){
			mark [a[i]]++;
			check = 1;
		}
	} 
  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (int i=0;i<n;i++){
  	if (mark[a[i]]){
  		printf ("%d-%d\n",mark[a[i]] ,a[i]);
  		mark[a[i]] = 0;
	  }
  }
	if (check==0){
		printf ("Not found");
		return 0;
	}
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}