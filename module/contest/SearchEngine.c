#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[j]);
        }
        int s;
        scanf("%d", &s);
        int temp=0,pos=0;
        for(int j = 0; j < s; j++){

            if(arr[j]==s){
                temp =1;
                pos = j+1;
                break;
                
            }
        }
        if(temp == 1){
            printf("Case %d: %d\n", i+1, pos);
        }
        else{
            printf("Case %d: Not Found\n", i+1);
        }
    }
    return 0;
}