#include <stdio.h>
struct point {
	int x , y;
};
int main (){
	system("cls");
	printf("\nINPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	struct point p1;
	p1.x = 2;
	p1.y = 3;
	
	struct point p2;
	scanf ("%d%d",&p2.x,&p2.y);
	
	
	
	
	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
	printf ("Gia tri cung : %d %d",p1.x , p1.y);
	printf ("\nGia tri nhap : %d %d",p2.x , p2.y);
	
	
	
	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
  	printf("\n");
  	system ("pause");
  	return(0);
}