#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        long long int a,b;
        scanf("%lld %lld", &a, &b);
        long long int ans,sum_a,sum_b;
        sum_a=(a*(a+1))/2;
        sum_b=(b*(b+1))/2;
        if(b>a){
            ans= (sum_b-sum_a)+a;
        }
        else{
            ans= (sum_a-sum_b)+b;
        }
        
        
        printf("%lld\n", ans);
    }
    return 0;
}