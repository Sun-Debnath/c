#include<stdio.h>
int main()
{
    char a[5];
    int x[4];
    printf("%d\n",sizeof(int));
    printf("%d",sizeof(a));
    for(int i = 0; i < 5; i++){
        scanf("%c", &a[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("%c", a[i]);
    }
    return 0;
}