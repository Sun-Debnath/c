#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 1; i <= n; i++){
        scanf("%d", &arr[i]);
    }
    
    // int temp;
    for(int i = 1; i < n; i++){
        for(int j = i+1; j <= n; j++){
            if(arr[i]<arr[j]){//compare for descending order
                arr[i]=arr[i]+arr[j];
                arr[j]= arr[i]-arr[j];
                arr[i]= arr[i]-arr[j];
            }
        }
    }
    for(int i = 1; i <= n; i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}