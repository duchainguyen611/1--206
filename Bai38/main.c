#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
        printf("\nNhap n (n nguyen duong):");
        scanf("%d",&n);
    }while(n<=0&&printf("\n Loi! n phai nguyen duong"));
    float S=pow(1.0,1.0/2);
    for(int i=1;i<=n;i++){
        S=pow((i+S)*1.0,1.0/(i+1));
    }
    printf("\nTong la:%g",S);

    return 0;
}
