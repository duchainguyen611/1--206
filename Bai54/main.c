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
    int count=0;
    do{
        int i=n%10;
        if(i==min)
            count++;
        if(min>i)
            min=i;
    }while(n/=10);
    printf("\nChu so be nhat la:%d",min);
    printf("\nSo luong chu so nho nhat la:%d",count);
    getch();
    return 0;
}
