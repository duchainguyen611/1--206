#include <stdio.h>
#include <stdlib.h>
#include  <math.h>

int main()
{
    int themang, n;
	int sochuso;

	do
	{
	printf("\nNhap n: ");
	scanf("%ld", &n);
	}while(n < 0 && printf("\nLoi: n >= 0 !"));
	sochuso = 0;
	themang = n;

	if(n == 0)
			sochuso = 1;
	while(themang != 0)
	{
		sochuso = sochuso + 1;
		themang = themang / 10;
	}
	printf("\nSo chu so cua %ld la %d", n, sochuso);


	getch();
    return 0;
}
