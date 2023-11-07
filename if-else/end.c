#include <stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    a = n%10;
    if(a==3){
        printf("End with 3");
    }
    else if(a==7){
        printf("End with 7");
    }
    else{
        printf("7");
    }
    return 0;
}