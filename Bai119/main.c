#include <stdio.h>
#include <stdlib.h>

int KiemTraNguyenTo(int n)
{
    if (n<2)
    {
        return 0;
    }
    else if (n>2)
    {
        if (n%2==0)
        {
            return 0;
        }
        for (int i=3;i<=sqrt((float)n);i+=2)
        {
            if (n%i==0)
            {
                return 0;
            }
        }
    }
    return 1;
}

void LietKeNguyenTo(int n)
{
    printf("\nSo nguyen to nho hon %d la:",n);
    for(int i = 2; i < n; i++)
    {
        if(KiemTraNguyenTo(i)==1)
            printf("%2d", i);
    }
}
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d",&n);
    LietKeNguyenTo(n);
    getch();
    return 0;
}
