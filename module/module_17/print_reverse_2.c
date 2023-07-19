#include<stdio.h>
void print_reverse(int arr[], int n, int i)
{
    /*  for reverse 
     i-1 will be happened 
     but also can be done by i+1 for that
     just need to call the function first */

    // if(i < 0) return;      // base case
    printf("%d\n", arr[i]);
    if(i == 0) return; // both base case position worked just need to apply correct condition
    print_reverse(arr,n, i-1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    print_reverse(arr,n,n-1);
    return 0;
}