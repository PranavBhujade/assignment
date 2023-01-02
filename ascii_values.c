#include <stdio.h>

int main() {
    char ch;
    printf("enter character: ");
    scanf("%c",&ch);
    int ascii=ch;
    printf("ascii value of %c is %d",ch,ascii);
    return 0;
}