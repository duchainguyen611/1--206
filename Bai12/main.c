#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float x;
    printf("\nNhap x:");
    scanf("%f",&x);
    do{
        printf("\nNhap n(n nguyen duong):");
        scanf("%d",&n);
    }while(n<=0&&printf("\nLoi! n phai nguyen duong"));
    float S=0;
    for(int i=0;i<=n;i++){
        S+=pow(x,i);
    }
    printf("\nS(n)=x+x^2+x^3+...+x^n=%g",S);
    getch();
    return 0;
}
