#include<stdio.h>
int main(){
    int list[5],min;
    for(int i=0;i<5;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&list[i]);
    }
    min=list[0];
    for(int j=1;j<5;j++){
        if(min>list[j]){
            min=list[j];
        }
    }
    printf("The mininum number is %d ",min);
    return 0;
}