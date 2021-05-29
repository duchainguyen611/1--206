#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
        printf("\nNhap n(n>=0):");
        scanf("%d",&n);
    }while(n<0&&printf("\nLoi! n>=0"));
    float S=0;
    for(int i=0;i<=n;i++){
        S+=(float)(2*i+1)/(2*i+2);
    }
    printf("S(n) = 1/2 + 3/4 + 5/6 +...+ (2n+1)/(2n+2)= %g",S);
    return 0;
}
