#include <stdio.h>
int main(){
    int a,t,p;
    scanf("%d%d",&a,&t);
    p = (a * 100)/t;
    if(p>75){
        printf("allowed to sit in exam");
    }
    else{
        printf("not allowed to sit in exam");
    }
    return 0;
}