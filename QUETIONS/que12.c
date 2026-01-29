// 2D array
#include<stdio.h>
int main(){
    int list[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Enter number %d in column %d : ",j+1,i+1);
            scanf("%d",&list[i][j]);
        }
    }
    printf("Your matrix is: \n");
    printf("-----------\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("| %d | ",list[i][j]);
        }
        printf("\n");
        printf("-----------\n");
        
    }

    return 0;
}