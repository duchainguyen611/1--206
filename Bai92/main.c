#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    do{
        printf("\nNhap so a:");scanf("%d",&a);
    }while(a<1&&printf("Loi! a phai nguyen duong"));
     do{
        printf("\nNhap so b:");scanf("%d",&b);
    }while(b<1&&printf("Loi! b phai nguyen duong"));
    int ucln;
    for(int i=1;i<a+b;i++){
        if(a%i==0&&b%i==0){
            if(ucln<i){
                ucln=i;
            }
        }
    }
    printf("\nUoc chung lon nhat cua 2 so tren la:%d",ucln);
    return 0;
}
