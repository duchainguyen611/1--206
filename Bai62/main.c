#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    do{
    do{
        printf("\nNhap so a (a nguyen duong):");
        scanf("%d",&a);
    }while(a<1&&printf("\nLoi! a phai nguyen duong."));
    do{
        printf("\nNhap so b (b nguyen duong):");
        scanf("%d",&b);
    }while(b<1&&printf("\nLoi! b phai nguyen duong."));
    }while(a==b&&printf("Loi! a va b phai khac nhau"));
    int ucln=0;
    for(int i=1;i<a+b;i++){
        if(a%i==0&&b%i==0){
            if(ucln<i){
                ucln=i;
            }
        }
    }
    printf("Uoc chung lon nhat cua %d va %d la:%d",a,b,ucln);

    return 0;
}
