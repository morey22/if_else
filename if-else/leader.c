#include <stdio.h>
int main(){
    int r;
    scanf("%d", &r);
    if(r%5==0){
        printf("r is group leader");
    }
    else{
        printf("r is not gruop leader");
    }
    return 0;
}