#include <stdio.h>
#include <stdlib.h>
#define Max 100

int soNguyenTo(int n){
    if(n<2)
        return 0;
    if(n>2)
        if(n%2==0)
            return 0;
        for(int i=3;i<=sqrt((float)n);i+=2)
            if(n%i==0)
                return 0;
    return 1;
}

int kiemTraSoNguyenTo(int n,int a[]){
    for(int i=0;i<n;i++)
        if(soNguyenTo(a[i])==1)
            return a[i];
    return 0;
}

int nguyentolonnhat(int n,int a[]){
    int max=a[0];
    for(int i=1;i<n;i++){
        if(soNguyenTo(a[i])==1){
            if(max<a[i]){
                max=a[i];
            }
        }
    }
    return max;
}

int main()
{
    int n;
    do{
        printf("\nNhap n phan tu:");
        scanf("%d",&n);
    }while(n<1&&n>Max&&printf("\nLoi!Moi nhap lai!"));
    int a[n];
    for(int i=0;i<n;i++){
        printf("\nPhan thu thu %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nSo nguyen to lon nhat la:");
    if(soNguyenTo(nguyentolonnhat(n,a))==0){
        printf(" %d",kiemTraSoNguyenTo(n,a));
    }else{
        printf(" %d",nguyentolonnhat(n,a));
    }

    return 0;
}
