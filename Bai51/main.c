#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
        printf("\nNhap n (n nguyen duong):");
        scanf("%d",&n);
    }while(n<1&&printf("\nLoi!n phai nguyen duong!"));
    int max=n%10;
    do{
        int i=n%10;
        if(max<i){
            max=i;
        }
    }while(n/=10);
    printf("\nChu so lon nhat la:%d",max);
    getch();
    return 0;
}
