#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
        printf("\nNhap n(n>0):");
        scanf("%d",&n);
    }while(n<=0&&printf("\nLoi! n>0"));
    int N=1;
    for(int i=1;i<=n;i++){
        N*=i;
    }
    printf("T(n)=1x2x3...xN=%d",N);
    return 0;
}
