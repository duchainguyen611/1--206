#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\nNhap n:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("\nNhap so %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        if(a[i]%2==0&&a[i+1]%2==0||a[i]%2==0&&a[i-1]%2==0){
            printf(" %d",a[i]);
        }
    }
    return 0;
}
