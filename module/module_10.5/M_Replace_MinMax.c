#include<stdio.h>
int main()
{
    int n,temp;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int max=arr[0],max_pos;
    int min=arr[1],min_pos;
    for(int i=0; i<n; i++){
        if(arr[i]>=max){
            max=arr[i];
            max_pos= i;
        }
        if(arr[i]<=min){
            min=arr[i];
            min_pos= i;
        }
    }
    // temp=max;
    // max=min;
    // min=temp;
    arr[max_pos]=min;
    arr[min_pos]=max;

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}