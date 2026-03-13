#include <stdio.h>
#include <string.h>
void swap3(int *a, int *b, int *c){
    int temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
}


int main(){
    int a, b, c;
    scanf ("%d%d%d",&a,&b,&c);
    swap3(&a,&b,&c);
    printf ( "%d %d %d",a,b,c);
     return 0;
}