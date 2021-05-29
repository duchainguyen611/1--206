#include <stdio.h>
#include <stdlib.h>\

int tongGiaTri(int n,int a[]){
    int S=0;
    for(int i=0;i<n;i++)
        S+=a[i];
    return S;
}

int main()
{
    int n;
    printf("\nNhap n:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("a[%d]:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nTong la: %d",tongGiaTri(n,a));
    return 0;
}
