#include <stdio.h>
int main(){
    int age;
    scanf("%d",&age);
    if(age>=60){
        printf("senior citizen");
    }
    else{
        printf("not senior citizen");
    }
    return 0;
}