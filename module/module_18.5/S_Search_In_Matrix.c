#include<stdio.h>
int main()
{
    int row, col,x;
    scanf("%d %d", &row,&col);
    int a[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&x);
    int temp=0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(a[i][j] == x){
                temp = 1;
                break;
            }
        }
    }
    if(temp==1){
        printf("will not take number");
    }
    else{
        printf("will take number");
    }
    return 0;
}