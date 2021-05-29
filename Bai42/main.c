#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
        printf("\nNhap so n (n nguyen duong):");
        scanf("%d",&n);
    }while(n<1&&printf("Loi! n phai nguyen duong"));
    int k;
    int S=0;
    for(int i=1;i<n;i++){
        S+=i;
        if(k<i&&S<n){
            k=i;
        }
    }
    printf("k=%d",k);
    return 0;
}
