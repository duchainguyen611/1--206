#include <stdio.h>
#include <stdlib.h>

int timMin(int n,int a[]){
    int min=a[0];
    for(int i=1;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    return min;
}

int KiemTraUocSoChung(int a[], int n, int UocSo)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] % UocSo != 0)
        {
            return 0;
        }
    }
    return 1;
}

int TimUocSoLonNhatCuaMang(int a[], int n)
{
     for(int UocSo = timMin(n,a); UocSo >= 1; UocSo--)
    {
        if(KiemTraUocSoChung(a, n, UocSo) == 1)
        {
            return UocSo;
        }
    }
    return 1;
}

int main()
{
    int n;
    do{
        printf("\nNhap n cac so nguyen:");
        scanf("%d",&n);
    }while(n<1||n>100&&printf("\nLoi! Moi nhap lai!"));
    int a[n];
    for(int i=0;i<n;i++){
        do{
            printf("\nSo thu %d:",i+1);
            scanf("%d",&a[i]);
        }while(a[i]<=0);
    }
    printf("\nUoc chung lon nhat la: %d",TimUocSoLonNhatCuaMang(a,n));
    return 0;
}
