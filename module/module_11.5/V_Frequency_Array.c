#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d", &n);
    scanf("%d", &m);
    int arr[n];
    // int i=0;
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    // while(()<=m) && i < n){
    //     i++;
    // }
    int cnt[m+1];
    for(int i=1; i<=m; i++){
        cnt[i] = 0;
    }
    
    for(int i = 0; i < n; i++){
        int value= arr[i];
        cnt[value]++;
    }
    for(int i = 1; i <= m; i++){
        // if(cnt[i] != 0){
            printf("%d\n", cnt[i]);
        // }
    }
    return 0;
}