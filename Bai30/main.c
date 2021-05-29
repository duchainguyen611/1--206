#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n;
    do{
    do{
        printf("\nNhap n(n nguyen duong):");
        scanf("%d",&n);
    }while(n<=0&&printf("\nLoi! n phai nguyen duong."));
    int S=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            S+=i;
        }
    }
    if (S==n){
        printf("\n%d la so hoan hao.",n);
    }else{
        printf("\n%d khong la so hoan hao.",n);
    }
    }while(1);
    return 0;
}
