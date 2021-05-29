#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
        printf("\nNhap n(n phai nguyen duong):");
        scanf("%d",&n);
    }while(n<=0&&printf("\nLoi! n phai nguyen duong:"));
    float S=0;
    int s=0;
    for(int i=1;i<=n;i++){
        s+=i;
        float a=1.0/(s);
        S+=a;
    }
    printf("S(n) = 1 + 1/(1+2)+1/(1+2+3)+...+1/(1+2+3+...+n)=%g",S);
    return 0;
}
