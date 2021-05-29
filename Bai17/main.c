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
    int p=1;
    float S=0;
    for(int i=1;i<=n;i++){
        p*=i;
        float a=(float)i/p;
        S+=pow(x,a);
    }
    printf("S(n)=x+x^(2/2!)+x^(3/3!)+...+x^(n/N!)=%g",S);
    return 0;
}
