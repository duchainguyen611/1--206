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
    int count=0;
    do{
        int i=n%10;
        if(i==max)
		   count++;
        if(i>max)
		   max = i;
    }while(n/=10);
    printf("\nSo lon nhat la %d", max);
    printf("\nSo luong chu so lon nhat la:%d",count);
    getch();
    return 0;
}
