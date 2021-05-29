#include <stdio.h>
#include <stdlib.h>

int giaithua(int a){
    if(a==1||a==0){
        return 1;
    }else{
        return a*giaithua(a-1);
    }
}

int main()
{
    int n,x;
    printf("\nNhap x:");
    scanf("%d",&x);
    do{
        printf("\nNhap n(n nguyen duong):");
        scanf("%d",&n);
    }while(n<=0&&printf("\nLoi! n phải nguyen duong."));
    float S=0;
    for(int i=0;i<=n;i++){
        float a=(float)(2*i)/giaithua(2*i);
        S+=pow(x,a);
    }
    printf("S(n)=1+x^(2/2!)+x^(4/4!)+...+x^(2n/(2n!))=%g",S);
    return 0;
}
