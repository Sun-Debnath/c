#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int i=0,temp,j=n-1;
    while(i<j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    
    
    // for(int i = 0; i < n; i++){
    //     arr[i] = arr[n-i-1];//ekhane arr[0] er value to change ei hoya jaytese to r dibo kmne 
    // }
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}