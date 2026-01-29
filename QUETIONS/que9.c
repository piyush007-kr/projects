#include<stdio.h>
int factorial();
int main(){
    int num,choose;
    
    
    while(choose!=0){
        printf("choose option in number\n");
        printf("0. Exit\n");
        printf("1. Factorial\n");
        printf("Enter: ");
        scanf("%d",&choose);
        switch(choose){
            case 0:
                printf("Bye.... Bye..... Come again!!\n");
                break;
            case 1:
                printf("Enter a number: ");
                scanf("%d",&num);
                printf("--------------------------------\n");
                printf("--------------------------------\n");
                int result=factorial(num);
                printf("factorial of %d is %d\n",num,result);
                printf("--------------------------------\n");
                printf("--------------------------------\n");
                
                break;
            default:
                printf("Enter valid data!!!\n");
                printf("--------------------------------\n");
                printf("--------------------------------\n");
        }
    }

    return 0;
}
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}