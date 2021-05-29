#include <stdio.h>
#include <stdlib.h>

int soNguyenTo(int x){
    if(x<2){
        return 0;
    }else if(x>2){
        if(x%2==0){
            return 0;
        }
        for(int i=3;i<x;i+=2){
            if(x%i==0)
                return 0;
        }
    }
    return 1;
}


int timSoMaxTrongMang(int n,int a[]){
    int max=a[0];
    for(int i=1;i<n;i++){
        if(max<a[i])
            max=a[i];
    }
    return max;
}

int NTMinLonHonMax(int n,int a[]){
    int max = timSoMaxTrongMang(n,a);
    int SoCanTim = max + 1;
    for(SoCanTim = max + 1;; SoCanTim++)
    {
        if(max < SoCanTim)
        {
            if(soNguyenTo(SoCanTim) == 1)
            break;
        }
    }
    return SoCanTim;
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
        printf("\nSo thu %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nSo nguyen to be nhat lon hon moi so trong mang la:%d",NTMinLonHonMax(n,a));
    getch();
    return 0;
}
