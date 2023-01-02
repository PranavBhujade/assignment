#include <stdio.h>

int main() {
    int num;
    printf("enter number: ");
    scanf("%d",&num);
    printf("factors of %d are: ",num);
    for(int i=1;i<=num;i++){
        if(num%i==0){
            printf("%d ",i);
        }
    }    
    return 0;
}