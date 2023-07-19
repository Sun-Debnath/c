#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = n-i; j >=1 ; j--){
            printf(" ");
        }
        for(int j = 1; j <= i+(i-1); j++){
           if(i%2!=0){
            printf("^");
             
           }
           else{
             printf("*");
           }
        }
        printf("\n");
    }
    return 0;
}