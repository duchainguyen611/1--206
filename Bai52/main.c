#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
        printf("\nNhap n (n nguyen duong):");
        scanf("%d",&n);
    }while(n<1&&printf("\nLoi!n phai nguyen duong!"));
    int min=n%10;
    do{
        int i=n%10;
        if(min>i){
            min=i;
        }
    }while(n/=10);
    printf("\nChu so be nhat la:%d",min);
    getch();
    return 0;
}
