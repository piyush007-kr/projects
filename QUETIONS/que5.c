#include<stdio.h>
#include<math.h>
int main(){
    int num,org,armNum=0,rem,count=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    org=num;
    int temp=num;
    while(temp!=0){
        temp=temp/10;
        count++;
    }
    while(num!=0){
        rem=num%10;
        armNum=armNum+round(pow(rem,count));
        num=num/10;
    }
    printf("Calculated sum: %d\n",armNum);
    if(armNum==org){
        printf("The number is an Armstrong number✅");
    }else{
        printf("The number is not an Armstrong number❌");
    }
    return 0;
}