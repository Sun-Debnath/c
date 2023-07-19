#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    fgets(a, 5, stdin);
    // gets(a);
    printf("%s",a);
    return 0;
}