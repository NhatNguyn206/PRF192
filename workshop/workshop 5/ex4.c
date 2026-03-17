#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, count = 0;
	system("cls");
	printf("\nINPUT:\n");
 	 //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
    fgets(str, 1000, stdin);
    str[strcspn(str, "\n")] = '\0';
    // Đếm số từ
    while (str[i] != '\0') {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
            count++;
        }
        i++;
    }

    printf("\nOUTPUT:\n");
  //@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
    printf("%d", count);

    return 0;
}