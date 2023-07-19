#include<stdio.h>
int length_string(char a[], int i)
{
    if(a[i] == '\0') return 0;
    int l = length_string(a, i + 1);
    return l+1;
}
int main()
{
    char a[1001];
    // scanf("%s", &a);
    gets(a);
    int length = length_string(a,0);
    printf("%d", length);
    return 0;
}