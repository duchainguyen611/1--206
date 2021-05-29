#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
        printf("\nNhap n(n nguyen duong):");
        scanf("%d",&n);
    }while(n<=0&&printf("\nLoi! n phai nguyen duong"));
    int S=0;
    int P=1;
    for(int i=1;i<=n;i++){
        P*=i;
        S+=P;
    }
    printf("S(n)=1+1x2+1x2x3+...+1x2x3...xN=%d",S);

    return 0;
}
