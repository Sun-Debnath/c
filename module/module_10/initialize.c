#include<stdio.h>
int main()
{
    char a[6] ={'a', 'b', 'c', 'd', 'e'};
    // char a[]= "abcde\0";
    printf("%d",sizeof(a));
    printf("%s",a);
    // for(int i = 0; i < 5; i++){
    //     printf("%c", a[i]);
    // }
    return 0;
}