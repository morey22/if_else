#include <stdio.h>
int main(){
    int cp;
    scanf("%d", &cp);
    if(cp>100000){
        int rt = (15*cp)/100;
        printf("%d", rt);
    }
    else if(cp>50000){
        int rt = (10*cp)/100;
        printf("%d", rt);
    }
    else if(cp>500000){
        int rt = (5*cp)/100;
        printf("%d", rt);
    }
    else{
        printf("invalid");
    }
    return 0;
}