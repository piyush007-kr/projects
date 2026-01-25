#include<stdio.h>
int main() {
    int i,rows;
    printf("enter the number of rows: ");
    scanf("%d",&rows);
    int count=1;
    for(i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
    return 0;
} 