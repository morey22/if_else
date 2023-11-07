#include<stdio.h>
int main() {
    int date;
    int month;
    int year;
    printf("enter the date");
    scanf("%d", &date);
    printf("enter the month");
    scanf("%d", &month);
    printf("enter the year");
    scanf("%d", &year);

    int cyear = 2024;
    int age;
    age = cyear - year;
    printf("%d", age);
    return 0;
}