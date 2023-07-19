#include<stdio.h>
#include<limits.h>
int main()
{
    int n,k;
    int loop;
    
    scanf("%d %d",&n,&k);
    
    if(n%k != 0){
        loop = (n/k)+1;
    }
    else{
        loop = n/k;
    }
    int arr[n+1];
    for(int i=1; i<=n; i++){
        scanf("%d",&arr[i]);
    }
    int index=0;

    
        for(int i=1; i<=loop; i++){
            int min=INT_MAX;
        for(int j=1; j<=k; j++){

            if((index+1)<=n && arr[index+1]<min ){
                min=arr[index+1];
            }
            index++;
        }
        printf("%d ",min);
        // printf("\n");
     }
    
    
    
    return 0;
}