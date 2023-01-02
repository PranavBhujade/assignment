#include <stdio.h>

int main() {
    int num1,num2,sum1,sum2 ,a,b;
    printf("enter two number: ");
    scanf("%d %d",&num1,&num2);
    printf("\ndivisors of %d are: \n",num1);
    for(int i=1;i<=num1-1;i++){
        if(num1%i==0){
            printf("%d ",i);
        }
        sum1=sum1+i;    
    }    
    printf("\ndivisors of %d are: \n",num2);
    for(int j=1;j<=num2-1;j++){
        if(num2%j==0){
            printf("%d ",j);
        }
        sum2=sum2+j;    
    }    
    a=sum1/num1;
    b=sum2/num2;
    if(a==b){
        printf("\nfriendly pair\n");
    }
    else{
        printf("\nnot a friendly pair\n");
    }
    return 0;
}