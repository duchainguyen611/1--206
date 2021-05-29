#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float x;
    do{
    printf("Nhap x (x nguyen duong):");
    scanf("%f",&x);
    }while(x<1&&printf("\nLoi! x phai nguyen duong"));
    do{
        printf("\nNhap n (n nguyen duong):");
        scanf("%d",&n);
    }while(n<1&&printf("\n Loi! n phai nguyen duong"));
    float S=0;
    int a=1;
    for(int i=1;i<=n;i++){
        S=sqrt(pow(x,i)+S);
    }
    printf("\nS(n)=CanBac2(x^n+CanBac2(x^n-1+...+CanBac2(x^2+CanBac2(x)))) co %d dau can la:%g",n,S);
    return 0;
}
