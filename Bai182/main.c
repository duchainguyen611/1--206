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
    printf("\n");
    for(int i=0;i<n;i++){
        if(a[i+1]*a[i]<0||a[i-1]*a[i]<0){
            printf(" %g",a[i]);
        }
    }
    return 0;
}
