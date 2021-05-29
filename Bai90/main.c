#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
        printf("\nNhap n(n nguyen duong):");scanf("%d",&n);
    }while(n<1&&printf("\nLoi! n phai nguyen duong"));
    int S=0;
    int m=0;
    while(S+m+1<n){
        m++;
        S+=m;
    }
    printf("\nm=%d",m);
    printf("\nTong la:%d",S);
    return 0;
}
