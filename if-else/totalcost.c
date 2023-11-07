#include <stdio.h>
int main(){
    int Q,C,D;
    scanf("%d",&Q);
    C = Q *100;
    if(C>100){
        D = (C*10)/100;
        int total = C - D;
        printf("total is = %d", total);
    }
    else{
        printf("cost is = %d", C);
    }
    return 0;

}