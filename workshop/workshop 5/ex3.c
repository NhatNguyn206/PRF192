#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i;
    int isPalindrome = 1;
    system("cls");
	printf("\nINPUT:\n");
 	 //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
 	scanf("%s", str);
    int n = strlen(str);
    // Ki?m tra palindrome
    for (i = 0; i < n / 2; i++) {
        if (str[i] != str[n - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
	printf("\nOUTPUT:\n");
  //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:

	if (isPalindrome)
        printf("Yes");
    else
        printf("No");
return 0;
}	        