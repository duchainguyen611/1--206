#include <stdio.h>
#include <stdlib.h>

void ganNhauNhat(int n,float a[]){
    float min=abs(a[0]-a[1]);
    printf("\n2 gia tri gan nhau nhat trong mang la:");
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(abs(a[i]-a[j])<min){
                min=abs(a[i]-a[j]);
            }
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(abs(a[i]-a[j])==min){
                printf(" (%g,%g)",a[i],a[j]);
            }
        }
    }
}

int main()
{
    int n;
    do{
        printf("Nhap n cac so (n>=2):");
        scanf("%d",&n);
    }while(n<2&&n>100&&printf("\nMoi Nhap lai n!"));
    float a[n];
    for(int i=0;i<n;i++){
        printf("\nNhap so %d:",i+1);
        scanf("%f",&a[i]);
    }
    ganNhauNhat(n,a);
    return 0;
}
