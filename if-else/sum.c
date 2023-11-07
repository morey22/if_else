#include <stdio.h>
int main(){
    int a,b,x;
    scanf("%d%d",&a,&b);
    x = a+b;
    printf("%d\n",x);
    if(x>15){
        printf("invalid");
    }
    else if(x<20){
        printf("20\n");
    }
    else{
        printf("invalid");
    }
    return 0;
}