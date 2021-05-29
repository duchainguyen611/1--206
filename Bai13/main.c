#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x;
    printf("\nNhap x:");
    scanf("%d",&x);
    do{
        printf("\nNhap n(n nguyen duong):");
        scanf("%d",&n);
    }while(n<=0&&printf("\nLoi! n phải nguyen duong."));
    int S=0;
    for(int i=1;i<=n;i++){
        S+=pow(x,2*i);
    }
    printf("S(n) = x^2 + x^4 +...+ x^2n = %d",S);
    return 0;
}
