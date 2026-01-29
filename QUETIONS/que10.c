#include<stdio.h>
int main(){
    int list[5],num,found=0;
    for(int i=0;i<5;i++){
        printf("enter a number: ");
        scanf("%d",&list[i]);
    }
    printf("Enter a number to find: ");
    scanf("%d",&num);
    for(int j=0;j<5;j++){ 
        if(list[j]==num){
            found=1;
            printf("Found at index %d\n",j);
            break;
        }
    }
    if(found==1){
        
    }else{
        printf("Notfound!");
    }
    return 0;
}