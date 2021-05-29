#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
    printf("\nNhap n:");
    scanf("%d",&n);
    if(n<=0){
        printf("n phai >1 ");
    }}while(n<=0);
    int S=0;
    for(int i=1;i<=n;i++){
        S+=pow(i,2);
    }
    printf("S=1^2 + 2^2 +... + %d^2=%d",n,S);
    return 0;
}
