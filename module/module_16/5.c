#include<stdio.h>
#include<string.h>
int is_palindrome(char a[])
{
    int temp=1;
    for(int i=0; i<strlen(a)/2; i++){
        if(a[i]!=a[strlen(a)-1-i]){
            temp=0;
            break;
        }
    }
    return temp;
}
int main()
{
    char a[11];
    scanf("%s",&a);
    int ans = is_palindrome(a);
    if(ans == 1){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}