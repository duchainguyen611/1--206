#include <stdio.h>
#include <stdlib.h>
#define Max 100

float amlonnhat(int n,float a[]){
    int max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<0){
            if(a[i]>max){
                max=a[i];
            }
        }
        if(a[i]>=0){
            return 0;
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
    float a[n];
    for(int i=0;i<n;i++){
        printf("\nPhan thu thu %d:",i+1);
        scanf("%f",&a[i]);
    }
    printf("\nPhan tu am lon nhat la: %g",amlonnhat(n,a));
    return 0;
}
