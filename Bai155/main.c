#include <stdio.h>
#include <stdlib.h>

float xanhat(int x,float a[],int n,float b[]){
    for(int i=0;i<n;i++)
        b[i]=abs(x-a[i]);
    float max=b[0];
    for(int i=1;i<n;i++)
        if(b[i]>max)
            max=b[i];
    for(int i=0;i<n;i++)
        if(b[i]==max)
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
    printf("\nGia tri xa x nhat la:%g",xanhat(x,a,n,b));
    return 0;
}
