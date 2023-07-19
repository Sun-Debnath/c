#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    fgets(a, 1001,stdin);
    int capital =0,small=0,spaces=0;
    for(int i = 0; i < strlen(a); i++){
        if(a[i]>='A' && a[i]<='Z'){
            capital++;
        }
        if(a[i]>='a' && a[i]<='z'){
            small++;
        }
        if(a[i] == ' '){
            spaces++;
        }
    }
    printf("Capital - %d\n",capital);
    printf("Small - %d\n",small);
    printf("Spaces - %d\n",spaces);

    return 0;
}