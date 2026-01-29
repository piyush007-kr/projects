#include<stdio.h>
int main(){
    int a,b,c,num;
    a=0;
    b=1;
    
    printf("Enter the number till where series run: ");
    scanf("%d",&num);
    printf("The Fibonacci series: %d %d ",a,b);
    for(int i=1;i<=num;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    
    return 0;
}