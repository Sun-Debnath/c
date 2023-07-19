#include<stdio.h>
int main()
{
    int x=10;
    printf("%p\n",&x);
    int *p = &x;
    p=100;
    printf("%p\n",p);
    //dereference
    printf("%d",*p);
    return 0;
}