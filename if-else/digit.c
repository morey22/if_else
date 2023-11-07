#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n<9){
        printf("one digit number");
    }
    else if(n<99){
        printf("two digit number");
    }
    else if(n<999){
        printf("three digit number");
    }
    else{
        printf("more than digit");
    }
    return 0;
}