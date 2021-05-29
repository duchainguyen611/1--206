#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
        printf("\nNhap n:");
        scanf("%d",&n);
    }while(n<=0&&printf("\nLoi! n phai nguyen duong"));
    printf("\nSo dao nguoc cua %d la: ", n);
	do
	{
		printf("%d", n % 10);///kiểu chia từng số 1 từ cuối lên lấy phần dư xog in ra
	}while(n /= 10);
    return 0;
}
