#include<stdio.h>
int main()
{
    int n, cnt[26]={0};
    scanf("%d\n", &n);
    // getchar();
    // char a[n+1];
    for(int i = 0; i < n; i++){
        char a;
        scanf("%c", &a) ;
        int j = a -'a';
        cnt[j]++;
        
    }
    // for(int i = 0; i < 26; i++){
    //     printf("%d ", cnt[i]);
    // }
    for(int i = 0; i < 26; i++){
        while(cnt[i]!=0){
            printf("%c", i+'a');
            cnt[i]--;
        }
    }
    return 0;
}