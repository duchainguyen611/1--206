#include <stdio.h>
#include <stdlib.h>

int giaithua(int a){
    if(a==0||a==1){
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
    float S=1;
    for(int i=0;i<=n;i++){
        float a=(float)(2*i+1)/giaithua(2*i+1);
        S+=pow(x,a);
    }
    printf("S(n)=1+x+x^(3/3!)+x^(5/5!)+...+x^((2n+1)/(2n+1)!)=%g",S);
    return 0;
}
