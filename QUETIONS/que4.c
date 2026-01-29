#include<stdio.h>
int main(){
    int num,rem,reverseNum=0,original;
    printf("Enter number: ");
    scanf("%d",&num);
    original=num;
    while(num!=0){
        rem=num%10;
        reverseNum=(reverseNum*10)+rem;
        num=num/10;
    }
    printf("%d\n",reverseNum);
    if(original==reverseNum){
        printf("The number is a palindrome number✅");
    }else{
        printf("The number is not a palindrome number❌");
    }
    return 0;
}