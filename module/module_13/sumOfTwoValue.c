#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d", &n);
    int arr[n];
    for(int i = 1; i <= n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    int temp=0;
    int posI,posJ;
    for(int i = 1; i < n; i++){
        for(int j = i+1; j <= n; j++){
            if(arr[i]+arr[j]==x){
                temp++;
                posI=i;
                posJ=j;
                break;
            }
        }
    }
    if(temp>0){
        printf("yes\n");
        printf("%d %d",posI,posJ);
    }
    else{
        printf("no");
    }
    return 0;
}