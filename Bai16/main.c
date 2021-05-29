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
    float S=0;
    int s=0;
    for(int i=1;i<=n;i++){
        s+=i;
        float b=(float)i/s;
        float a=pow(x,b);
        S+=a;
    }
    printf("S(n)=x+x^(2/1+2)+x^(3/1+2+3)+...+x^(n/1+2+3+...+n)=%g",S);
    return 0;
}
