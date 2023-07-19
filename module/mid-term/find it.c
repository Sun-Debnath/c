#include<stdio.h>
int main()
{
    int n,k;
    int find=0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    for(int i = 0; i < n; i++){
        if(arr[i]==k){
            find++;
        }
    }
    printf("%d", find);

    return 0;
}