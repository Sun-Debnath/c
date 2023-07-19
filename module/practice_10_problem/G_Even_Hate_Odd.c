#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        int x;
        scanf("%d",&x);
        int arr[x];
        int even=0,odd=0;
        for(int j=0; j<x; j++){
            scanf("%d",&arr[j]);
            if(arr[j]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(x%2!=0){
            printf("-1\n");
        }
        else if(abs(even-odd)%2==0){
            printf("%d\n",abs((even-odd)/2));
        }
    }

    return 0;
}