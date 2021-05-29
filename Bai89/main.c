#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
        printf("\nNhap n(n nguyen duong):");scanf("%d",&n);
    }while(n<1&&printf("\nLoi! n phai nguyen duong"));
    int S=0;
    for(int i=1;i<n;i++){
        if(i%2!=0){
            S+=i;
        }
    }
    printf("\nTong le nguyen nho nho n la:%d",S);
    return 0;
}

