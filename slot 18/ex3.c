#include <stdio.h>
typedef struct {
	int id;
	char name[50];
	float price;
}book;

int main(){
	int n;
	scanf ("%d",&n);
	book p[n];
	for (int i=0;i<n;i++){
		printf ("\nEnter details for product %d:\n",i+1);
		printf ("Product Name: ");
		getchar(); 
		fgets(p[i].name, 50, stdin);
		p[i].name[strcspn(p[i].name,"\n")] = '\0';
		printf ("Product ID: ");
		scanf ("%d",&p[i].id);
		printf ("Price: ");
		scanf ("%f",&p[i].price);
	}
	
	int maxIndex = 0;
	for (int i=1;i<n;i++){
		if (p[i].price>p[maxIndex].price){
			maxIndex=i;
		}
	}
  	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
	//@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
  	printf("\nProduct co gia cao nhat:\n");
	printf("Name: %s\n", p[maxIndex].name);
	printf("ID: %d\n", p[maxIndex].id);
	printf("Price: %.3f\n", p[maxIndex].price);
return 0;
}