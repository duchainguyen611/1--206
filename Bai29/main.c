#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
        printf("\nNhap n(n nguyen duong):");
        scanf("%d",&n);
    }while(n<=0&&printf("\nLoi! n phai nguyen duong."));
    int max;
    for(int i=1;i<n;i++){
        if(n%i==0&&i%2!=0){
            if(max<i){
                max=i;
            }
        }
    }printf("Uoc so le lon nhat cua %d la:%d",n,max);
    return 0;
}
