#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int i = 0, j = n-1;
    while(j>i){
        printf("%d %d ",arr[i],arr[j]);
        j--;
        i++;
    }
    if(n%2!=0){
        printf("%d ",arr[n/2]);
    }
   
    return 0;
}