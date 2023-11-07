#include <stdio.h>
int main (){
    float sp,cp,p,per;
    scanf("%f%f",&sp,&cp);
    if(sp>cp){
         p = sp - cp;
         per = (p * 100) / cp;
        printf("%f", per);
    }
    else{
        printf("invalid");
    }
    return 0;

}