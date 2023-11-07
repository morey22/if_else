#include <stdio.h>
int main() {
    int year;
    int salary;
    scanf("%d", &year);
    scanf("%d", &salary);
    if(year>5){
        int bonus = (salary * 5)/100;
        printf("year bonus = %d", bonus);
    }
    else{
        printf("no bonus");
    }
}