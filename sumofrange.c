#include <stdio.h>

int main() {
    int a; int b; int i; int sum;
    printf("enter the range of numbers: ");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){
        sum=sum+i;
    }
    printf("the sum of numbers from %d to %d is: %d",a,b,sum);
    return 0;
}