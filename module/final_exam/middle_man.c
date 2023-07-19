#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 1; i <= n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 1; i < n; i++){
        for(int j = i+1; j <= n; j++){
            if(arr[i] > arr[j]){
                arr[i] = arr[i]+arr[j];
                arr[j] = arr[i]-arr[j];
                arr[i] = arr[i]-arr[j];
            }
        }
    }
    if(n%2==0){
        printf("%d %d\n", arr[n/2], arr[(n/2)+1]);
    }
    else{
        printf("%d ", arr[(n+1)/2]);
    }
    return 0;
}