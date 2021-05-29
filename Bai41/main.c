#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
        printf("\nNhap n (n nguyen duong):");
        scanf("%d",&n);
    }while(n<1&&printf("\nLoi! n phai nguyen duong"));
    float S=1.0;
    for(int i=0;i<=n;i++){
        S=1.0/(1+S);
    }
    printf("\nS(n)=1/(1+1/(1+1/(...1+1/1+1))) co %d dau phan so=%g",n,S);
    return 0;
}
