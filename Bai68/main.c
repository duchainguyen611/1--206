#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,n;
    printf("\nNhap x:");
    scanf("%d",&x);
    do{
        printf("\nNhap n(n nguyen duong):");
        scanf("%d",&n);
    }while(n<1&&printf("\nLoi! n phai nguyen duong!"));
    int S=0;
    for(int i=1;i<=n;i++){
        S+=pow(-1,i)*pow(x,2*i);
    }
    printf("\nS=%d",S);
    return 0;
}
