#include <stdio.h>
int main(){
    int l,b,a,p;
    scanf("%d%d",&l,&b);
    a = l*b;
    printf("%d\n",a);
    p = 2 * (l+b);
    printf("%d\n", p);
    if(a>p){
        printf("area is greater %d", a);
    }
    else if(p>a){
        printf("perimeter is greater %d", p);
    }
    else{
        printf("both are equal");
    }
    return 0;


}