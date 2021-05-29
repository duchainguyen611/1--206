#include <stdio.h>
#include <stdlib.h>

float gannhat(int x,float a[],int n,float b[]){
    for(int i=0;i<n;i++)
        b[i]=abs(x-a[i]);
    float min=b[0];
    for(int i=1;i<n;i++)
        if(b[i]<min)
            min=b[i];
    for(int i=0;i<n;i++)
        if(b[i]==min)
            return a[i];
}

int main()
{
    int x=15;
    int n;
    printf("\nx=15");
    do{
        printf("\nNhap n cac so nguyen:");
        scanf("%d",&n);
    }while(n<1&&n>100&&printf("\nLoi! Moi nhap lai!"));
    float a[n];
    float b[n];
    for(int i=0;i<n;i++){
        printf("\nSo thu %d:",i+1);
        scanf("%f",&a[i]);
    }
    printf("\nGia tri gan x nhat la:%g",gannhat(x,a,n,b));
    return 0;
}
