#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        char a[101];
        scanf("%s",&a);
        if(strlen(a)<=10){
            printf("%s\n",a);
        }
        else{
            printf("%c%d%c\n",a[0],strlen(a)-2,a[strlen(a)-1]);
        }
    }
    return 0;
}