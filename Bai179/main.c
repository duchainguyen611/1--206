#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\nNhap n:");
    scanf("%d",&n);
    float a[n];
    for(int i=0;i<n;i++){
        printf("\nNhap so %d:",i+1);
        scanf("%f",&a[i]);
    }
    printf("\nGia tri trong mang lon hon tri tuyet doi cua gia tri dung sau la:");
    for(int i=0;i<n-1;i++){
        if(a[i]>abs(a[i+1])){
            printf(" %g",a[i]);
        }
    }
    return 0;
}
