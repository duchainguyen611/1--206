#include <stdio.h>
#include <stdlib.h>

float cuoicung(int n,float a[]){
    for(int i=n-1;i>=0;i--)
        if(a[i]<0&&a[i]>-1)
            return a[i];
    return 0;
}

int main()
{
    int n;
    do{
        printf("\nNhap n cac so thuc:");
        scanf("%d",&n);
    }while(n<1||n>100&&printf("\nLoi! Moi nhap lai!"));
    float a[n];
    for(int i=0;i<n;i++){
        printf("So thu %d:",i+1);
        scanf("%f",&a[i]);
    }
    printf("\nGia tri am cuoi >-1 la: %g",cuoicung(n,a));
    return 0;
}
