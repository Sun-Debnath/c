#include<stdio.h>
void even_or_not(int n){
    if(n%2==0){
        printf("yes");
    }
    else{
        printf("no");
    }
    
    
}
int main()
{   int n;
    scanf("%d",&n);
    even_or_not(n);
    return 0;
}