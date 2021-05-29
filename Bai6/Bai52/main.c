#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
        printf("\nNhap n (n nguyen duong):");
        scanf("%d",&n);
    }while(n<1&&printf("\nLoi!n phai nguyen duong!"));
    int min=0;
    do{
        int i=n%10;
        if(i<min){
            min=i;
        }
    }while(n/=10);
    printf("\nChu so be nhat la:%d",min);
    return 0;
}
