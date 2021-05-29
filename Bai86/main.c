#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
        printf("\nNhap n (n nguyen duong):");scanf("%d",&n);
    }while(n<1&&printf("\nLoi!n nguyen duong"));
    int S=0;
    for(int i=1;i<=n;i++){
        S+=pow(i,3);
    }
    printf("S=1^3+2^3+...+n^3=%d",S);
    return 0;
}
