#include<stdio.h>
void positive_or_not(void){
    int n;
    scanf("%d", &n);
    if(n>0){
        printf("yes");
    }
    else{
        printf("no");
    }
}
int main()
{   
    positive_or_not();
    return 0;
}