#include<stdio.h>
void fun(int *ptr)
{
    // before changing the function 
    printf("before changing value -%d\n", *ptr);
    // if I change the value here by dereference  
    *ptr=100;
    printf("after changing value -%d\n", *ptr);
}
int main()
{
    int n=10;
    fun(&n);
    // here value will be changed 
    printf("in main function after calling the function -%d\n", n);
    return 0;
}