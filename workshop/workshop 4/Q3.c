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
	if (check !=1 || n <=0){
	printf("OUTPUT:\n");
  	printf ("Invalid input");
  	return 0;
    }
    int a[n];
	for (int i=0;i<n;i++){
		scanf ("%d",&a[i]);
	}
    
	for (int i=0;i<n-1;i++){
    	for (int j=i+1;j<n;j++){
    		if (a[i]<a[j]){
    			int swap = a[i];
    				a[i]= a[j];
    				a[j]= swap;
			}
		}
	}
  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");

  	for (int i = 0 ; i<n ; i++){
  		if (a[i]%2==0){	
		printf ("%d\n",a[i]);
		}
	  }
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  printf ("\n");
  return(0);
}
