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
    for(int i=0;i<=n;i++){
        S+=pow(x,2*i+1);
    }
    printf("S(n) = x + x^3 + x^5 +...+ x^2n + 1 = %d",S);
    return 0;
}
