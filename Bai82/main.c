#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3];
    printf("\nNhap 3 so:");
    int max=a[0];
    for(int i=0;i<3;i++){
        printf("\nSo thu %d:",i+1);
        scanf("%d",&a[i]);
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("\nSo lon nhat la: %d",max);
    return 0;
}
