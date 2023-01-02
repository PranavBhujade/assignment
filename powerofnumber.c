#include <stdio.h>

int main() {
    int num, i=1, product=1, power;
    printf("enter number: ");
    scanf("%d",&num);
    printf("enter the power: ");
    scanf("%d",&power);
    do{
        product=product*num;
        i++;
    }while(i<=power);
    printf("the answer is: %d",product);
    return 0;
}