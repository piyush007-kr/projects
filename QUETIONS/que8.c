#include<stdio.h>
void sayHello();
int checkPrime();
int main(){
    int choose,k=0;
    sayHello();
    while(k==0){
        printf("Press 1 to checkPrime number ---> \n");
        scanf("%d",&choose);

        if(choose==1){
            checkPrime();
        }else{
            printf("Enter valid data....!\n");
        }
    }
        return 0;
}

void sayHello(){
    printf("Hello Sir!\n");
}

int checkPrime(){
    int num,rem,count=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=2;i<num;i++){
        if(num%i==0){
            count++;
            break;
        }else{}
    }
    if(count==0){
        printf("Prime\n");
    }else{
        printf("Not a Prime\n");
    }
}