#include <stdio.h>
int main(){
    int sp,cp;
    scanf("%d%d",&sp,&cp);
    if(sp>cp){
        int p = sp - cp;
        printf("%d", p);
    }
    else if(sp==cp){
        printf("No profit No lost");
    }
    else{
        int l = cp - sp;
        printf("%d", l);
    }
    return 0;
}