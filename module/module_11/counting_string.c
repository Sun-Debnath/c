#include<stdio.h>
#include<string.H>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        char a[100];
        scanf("%s",&a);
        int cnt[26]={0};
        for(int i = 0; i < strlen(a); i++){
            int value = a[i]-'a';
            cnt[value]++;
        }
        for(int i = 0; i < 26; i++){
            if(cnt[i] != 0){
                printf("%c -%d\n",i+'a',cnt[i]);
            }
        }
    }
    return 0;
}