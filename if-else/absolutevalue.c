#include <stdio.h>

int main() {
    int a;
    printf("enter the number a : ");
    scanf("%d", &a);

    if(a<0){
        a = a * (-1);
    }
    printf("The absolute value is : %d", a);
}