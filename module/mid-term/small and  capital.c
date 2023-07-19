#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s", a);
    int cap=0,small=0;
    for(int i = 0; i <strlen(a); i++){
        if(a[i]>='A'&& a[i]<='Z'){
            cap++;
        }
        else if(a[i]>='a'&& a[i]<='z'){
            small++;
        }
    }
    printf("%d %d",cap,small);
    return 0;
}