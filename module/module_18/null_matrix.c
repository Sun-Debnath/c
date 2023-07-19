#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&a[i][j]);
        }
    }
    int temp=1;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(a[i][j]!=0){
                temp=0;
                break;
            }
        }
    }
    if(temp==1){
        printf("nul matrix");
    }
    else{
        printf("non");
    }
    return 0;
}