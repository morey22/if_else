#include <stdio.h>
int main () {
       float sp,cp,l,l_per;
       scanf("%f%f", &sp,&cp);
       if(cp>sp){
             l = cp-sp;
             l_per = (l*100)/cp;
             printf("%f",l_per);
       }
       else{
        printf("invalid");
       }
    return 0;
}