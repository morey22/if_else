#include <stdio.h>
int main(){
    int city;
    scanf("%d",&city);
    if(city=='delhi'){
        printf("Red Fort");
    }
    else if(city=='agra'){
        printf("Taj Maha;");
    }
    else if (city=='jaiput'){
        printf("Jal Mahal");
    }
    else{
        printf("invalid");
    }
    return 0;
}