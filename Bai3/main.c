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
    float S=0;
    for(int i=1;i<=n;i++){
        S+=1.0/i;
    }
    printf("S=1+1/2+...+1/%d=%g",n,S);
    return 0;
}
