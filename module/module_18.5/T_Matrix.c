#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int p_d=0, s_d=0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i==j){
                p_d=p_d + a[i][j];
            }
            if(i+j == n-1){
                s_d=s_d + a[i][j];
            }
        }
    }
    int ans = p_d-s_d;
    if(ans<0){
        printf("%d",ans*-1);
    }
    else{
        printf("%d",ans);
    }
    return 0;
}