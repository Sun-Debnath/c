#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int pos;
    for(int i = 0; i < n; i++){
        if(arr[i]==0){
            pos=i;
            int temp;
            int k=0, j=pos-1;
            while(j>k){
                temp=arr[k];
                arr[k]=arr[j];
                arr[j]=temp;
                k++;
                j--;
            }    
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}