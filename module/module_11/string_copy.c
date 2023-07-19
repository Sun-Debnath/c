#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    strcpy(a,b);
    // this is a manual technic to copy string 
    // for(int i=0;i<=strlen(b);i++){
    //     a[i]=b[i];
    // }
    printf("%s %s",a,b);
    return 0;
}