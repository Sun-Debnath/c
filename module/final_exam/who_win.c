#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int tiger=0,pathan=0;
    for(int i = 0; i < n; i++){
        int t,p;
        scanf("%d %d", &t,&p);
        if(t>p){
            tiger++;
        }
        if(p>t){
            pathan++;
        }
    }
    if(pathan>tiger){
        printf("Pathan");
    }
    else if(tiger>pathan){
        printf("Tiger");
    }
    else{
        printf("Draw");
    }
    return 0;
}