#include<stdio.h>
int count_before_zero(int arr[], int n)
{
    int temp=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            break;
        }
        else{
            temp++;
        }
    }
    return temp;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int ans = count_before_zero(arr,n);
    
    printf("%d", ans);
    return 0;
}