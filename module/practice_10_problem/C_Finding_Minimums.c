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
    if(n>=k){
        for(int i=1; i<=loop; i++){
        if(i==1){
            int min= INT_MAX;
            for(int j=1; j<=k && j<=n; j++){
                
                if(arr[j]<min){
                    min = arr[j];
                }
            }
            printf("%d ",min);
            // i++;
            // printf("%d",i);
        }
        else{
            int min= INT_MAX;
            for(int j=0; j<k&& j<=n; j++){

            if((1+((i-1)*k)+j)<=n && arr[1+((i-1)*k)+j]<min){
                min = arr[1+((i-1)*k)+j];
            }
        }
        printf("%d ",min);
        }
        
     }
    }
    else{
        int min= INT_MAX;
        for(int i=1; i<=n; i++){
            if(arr[i]<min){
                min = arr[i];
            }
        }
        printf("%d",min);
    }
    
    return 0;
}