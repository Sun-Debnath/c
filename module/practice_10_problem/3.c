#include<stdio.h>
#include<limits.h>
#include<math.h>
int main()
{
    int n , k;
    scanf("%d %d",&n ,&k);
    int Ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d" , &Ar[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        int mini = INT_MAX;
        int j;
        for (j = i; j <(i+k) && j<n; j++)
        {
           if (Ar[j]<mini)
           {
              mini = Ar[j];
           }
           
        }
        printf("%d ",mini);
        i = j-1;
    }
    
}