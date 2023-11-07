#include <stdio.h>
int main(){
    int p,c,m,b,C;
    scanf("%d%d%d%d%d",&p,&c,&m,&b,&C);
    int T = p+c+m+b+C;
    printf("%d\n", T);
    int per = (T*100)/500;
    printf("%d\n", per);
    if(per>=90){
        printf("Grade A");
    }
    else if(per>=80){
        printf("Grade B");
    }
    else if(per>=70){
        printf("Grade C");
    }
    else if(per>=60){
        printf("Grade D");
    }
    else if(per>=50){
        printf("Grade E");
    }
    else{
        printf("Grade F");
    }
    return 0;
}