#include <stdio.h>
int main(){
    int e;
    scanf("%d", &e);
    int f = (1*e)/12;
    if(f>=5){
        printf("allowed to sit");
    }
    else{
        printf("not allowed to sit");

    }
    return 0;
}