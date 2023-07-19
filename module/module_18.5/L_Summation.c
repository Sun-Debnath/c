#include<stdio.h>
long long int fun(int arr[], int n,int i)
{
    if(i == n) return 0;
    long long int ans = fun(arr, n, i+1);
    long long int sum = ans + arr[i];
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    long long int ans = fun(arr,n,0);
    printf("%lld", ans);
    return 0;
}