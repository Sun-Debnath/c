#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int arr[n];
    for(int i = 0; i < n; i++){
        long long int x;
        scanf("%lld", &x);
        long long int cnt = 0;
        while(x != 0){
            if(x%2==0){
                cnt++;
                x=x/2;
            }
            else{
                break;
            }
            
        }
        arr[i] = cnt;
        // printf("%lld", cnt);
        
    }
    long long int max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max= arr[i];
        }
    }
    printf("%d", max);
    return 0;
}