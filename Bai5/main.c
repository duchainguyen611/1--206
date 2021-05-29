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
    for(int i=0;i<=n;i++){
        S+=1.0/(2*i+1);
    }
    printf("S=1+1/3+..+1/(2*%d+1)=%g",n,S);
    return 0;
}
