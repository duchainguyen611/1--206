#include <stdio.h>
#include <stdlib.h>


void nhapSoCacSo(int *n){
    printf("\nNhap so cac so trong mang:");
    scanf("%d",&n);
}

void nhapSo(int n,int a[]){
    for(int i=0;i<n;i++){
        printf("\nNhap so thu %d:",i+1);
        scanf("%d",&a[i]);
        }
}

void soMax(int n,int a[]){
    int max=a[0];
    for(int i=1;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
     printf("\nSo lon nhat la:%d",max);
}

int main()
{
    int n;
    nhapSoCacSo(&n);
    int a[50];
    nhapSo(n,a);
    soMax(n,a);
    return 0;
}
