#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,themang;
    do
	{
	printf("\nNhap n: ");
	scanf("%ld", &n);
	}while(n < 0 && printf("\nLoi: n >= 0 !"));
	int S=0;
	themang=n;
	while(themang!=0){
        S=S+ themang%10;
        themang=themang/10;
	}
    printf("\nTong la %d",S);
    getch();
    return 0;
}
