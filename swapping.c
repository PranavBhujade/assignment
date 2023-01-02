#include <stdio.h>

int main() {
    int a,b;
    printf("enter number a: ");
    scanf("%d",&a);
    printf("enter number b: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping a is= %d & b is= %d",a,b);
    return 0;
}