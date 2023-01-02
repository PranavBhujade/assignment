#include <stdio.h>

int main() {
    int num;int sum=0;
    printf("enter number: ");
    scanf("%d",&num);
    while(num>=0){
        sum=sum+num;
        num=num-1;
    }
    printf("the sum is: %d", sum);
    return 0;
}