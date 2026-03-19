#include <stdio.h>
typedef struct {
	int x , y;
} point;

void nhapDiem (point p[],int n){
	for (int i=0;i<n;i++){
	scanf ("%d %d",&p[i].x,&p[i].y);
	}
}

void inDiem (point p[],int n){
	for (int i=0;i<n;i++){
	printf ("(%d,%d)\n",p[i].x,p[i].y);
	}
}
// diem lon hon
point diemLonnhat(point p){
	if (p.y>p.x){
		return p;
	}
	point empty = {0;0};
	return empty;
}

int main (){
	system("cls");
	printf("\nINPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf ("%d",&n) ;
	point p[n];
	nhapDiem (p,n);
// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
//@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:

	inDiem(p,n);

	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
  	printf("\n");
  	system ("pause");
  	return(0);
  	
}