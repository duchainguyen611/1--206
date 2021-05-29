#include <stdio.h>
#include <stdlib.h>
#define Max 100

int count=0;

void nhap(int *n,float a[]){
    do{
        printf("\nNhap so phan tu:");
        scanf("%d",&*n);
    }while(1>=*n&&*n>=Max&&printf("\nMoi ban nhap lai!"));
    for(int i=0;i<*n;i++){
        printf("\nPhan tu thu %d:",i+1);
        scanf("%f",&a[i]);
    }
}

int ktraSoNguyenTo(float a){
    if(a<2){
        return 0;
    }else if(a>2){
        if((int)a%2==0)
            return 0;
        for(int i=3;i<sqrt((float)a);i+=2){
            if((int)a%i==0)
                return 0;
        }
    }
    return 1;
}


void dem(int n,float a[]){
    printf("\nCac so nguyen to <100 la:");
        for(int i=0;i<n;i++){
            if(ktraSoNguyenTo(a[i])==1&&a[i]<100){
                printf(" %g ",a[i]);
                count++;
            }
        }
        printf("\nSo cac so nguyen to <100 la:%d",count);
}

int main()
{
    int n;
    float a[Max];
    nhap(&n,a);
    dem(n,a);
    return 0;
}
