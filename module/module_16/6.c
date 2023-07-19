#include<stdio.h>
void fun(int n)
{
    // before changing thr value
    printf("before changing value - %d\n", n);
    // if I change the value here 
    n=100;
    printf("after changing value - %d\n", n);
}
int main()
{
    int n=10;
    fun(n);
    // but here value still remains same after calling function
    printf("in main function after calling the function - %d\n", n);
    return 0;
}