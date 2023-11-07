#include <stdio.h>
int main(){
    int a,b,c,d,e,L;
    int l,m,n,o,p,M;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    scanf("%d%d%d%d%d",&l,&m,&n,&o,&p);
    L= a+b+c+d+e;
    M= l+m+n+o+p;
    printf("%d %d\n", L, M);
    int P = (L*100)/500;
    printf("%d\n", P);
    int R = (M*100)/500;
    printf("%d\n", R);
    
    if(P>R){
        printf("P is topper\n");
    }
    else{
        printf("R is topper");
    }
    return 0;
}