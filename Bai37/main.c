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
    for(int i=2;i<=n;i++){
        S=pow(i+S,1.0/i);
    }
    printf("S(n)=CanBacN(N+CanBacN-1(N-1+...+CanBac3(3+CanBac2(2))) co %d dau can=%g",n-1,S);
    return 0;
}
