#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
	int n;
	float result = 0;
	long long sum = 1;
	int check = scanf ("%d",&n);
	if (check !=1){
		return 0;
	}

  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
    if (n<=0){
		printf ("Error: n must be greater than 0.");
    }else{
    	for (int i = 1;i<=n;i++){
  		sum *=i;
  		result += 1.0 / sum ;
	  }
	  printf("%.3f",result);
	}
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
