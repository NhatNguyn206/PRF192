#include <stdio.h>
#include <string.h>
int main() {
	system("cls");
	printf("\nINPUT:\n");
 	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
 	char str [1000];
 	int i = 0;
    int digit = 0, letter = 0, other = 0;
 	fgets (str,1000,stdin);
 	str[strcspn(str, "\n")] = '\0';
 	
 	 while (str[i] != '\0') {
        // kiểm tra số
        if (str[i] >= '0' && str[i] <= '9') {
            digit++;
        }
        // kiểm tra chữ
        else if ((str[i] >= 'a' && str[i] <= 'z') ||
                 (str[i] >= 'A' && str[i] <= 'Z')) {
            letter++;
        }
        // còn lại
        else {
            other++;
        }
        i++;
    }
    printf("\nOUTPUT:\n");
  	//@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
  	printf("%d\n", digit);
    printf("%d\n", letter);
    printf("%d", other);
return 0;
}