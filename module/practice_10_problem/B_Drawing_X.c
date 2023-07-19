#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // int star=n-2, slashes=2;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            
            if(j==i){
                if(i==((n/2)+1)){
                    printf("X");
                }
                else{
                     printf("\\");
                }     
            }
            // if(j==i && i==((n/2)+1)){
            //     printf("X");
            // }
            else if(j==(n-i+1)){
                printf("/");
            }
            else{
                printf("*");
            }
            
        }
        printf("\n");
    }
    return 0;
}