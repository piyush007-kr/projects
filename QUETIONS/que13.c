#include<stdio.h>
int main(){
    int list[4];
    for(int i=0;i<4;i++){
        printf("Enter number %d : ",i);
        scanf("%d",&list[i]);
        for(int j=0;j<4;j++){
            if(list[j]==list[i]){
                printf("no. already exits");
            }
            
        }
    }
    return 0;
}