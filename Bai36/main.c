#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
        printf("\nNhap n (n nguyen duong):");
        scanf("%d",&n);
    }while(n<=0&&printf("\n Loi! n phai nguyen duong"));
    float S=0;
    int a=1;
    for(int i=1;i<=n;i++){
        a*=i;
        S=sqrt(a+S);
    }
    printf("\nS(n)=CanBac2(n!+CanBac2((n-1)!+CanBac2((n-2)!+...+CanBac2(2!)+CanBac2(1!)))) co %d dau can=%g",n,S);
    return 0;
}
