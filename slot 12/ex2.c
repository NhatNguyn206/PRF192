#include <stdio.h>
int soLonnhat (int a,int b,int c){
	int max=a;
	if (a<b){
		max=b;
	}
	if (a<c){
		max=c;
	}
	return max;
}

int main (){
	int a,b,c;
	scanf ("%d%d%d",&a,&b,&c);
	int ketqua = soLonnhat (a,b,c);
	printf("So lon nhat la:%d",ketqua);
	return 0;
}