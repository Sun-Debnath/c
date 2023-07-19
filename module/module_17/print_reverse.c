#include<stdio.h>
void print_reverse(int arr[], int n, int i)
{
    /* for reverse what i do just call the function first 
    this is the magic of recursion
    also it can be done if we call the fuction second 
    but for that i-1 will be happened */
    if(i == n) return;
    print_reverse(arr,n, i+1); // for reverse call the function first
    printf("%d\n", arr[i]);
}
/* in recursion it actually not call the same function it actually called 
the copied function of the original function
and it start do the work with the last called copied function
thats the magic of recursion */ 

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    print_reverse(arr,n,0);
    return 0;
}