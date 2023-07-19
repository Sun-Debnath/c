#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s",&a);
    int temp=0;
    for(int i=0; i<strlen(a)/2; i++){
        if(a[i]!=a[strlen(a)-1-i]){
            temp++;
            break;
        }
    }
    if(temp==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}