#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("\nNhap 3 canh cua 1 tam giac:");
    printf("\nCanh a:");
    scanf("%f",&a);
    printf("\nCanh b:");
    scanf("%f",&b);
    printf("\nCanh c:");
    scanf("%f",&c);
    if(a>abs(b-c)&&a<b+c||b>abs(a-c)&&b<a+c||c>abs(b-a)&&c<b+a){
        if(a==b&&pow(a,2)+pow(b,2)==pow(c,2)||a==c&&pow(a,2)+pow(c,2)==pow(b,2)||b==c&&pow(c,2)+pow(b,2)==pow(a,2)){
            printf("\nDay la tam giac vuong can.");
        }else if(a==b&&pow(a,2)+pow(b,2)!=pow(c,2)||a==c&&pow(a,2)+pow(c,2)!=pow(b,2)||b==c&&pow(c,2)+pow(b,2)!=pow(a,2)){
            printf("\nDay la tam giac can thuong.");
        }else if(a==b&&b==c){
            printf("\nDay la tam giac deu.");
        }else if(pow(a,2)+pow(b,2)==pow(c,2)||pow(a,2)+pow(c,2)==pow(b,2)||pow(c,2)+pow(b,2)==pow(a,2)){
            printf("\nDay la tam giac vuong thuong.");
        }else{
            printf("\nDay la tam giac thuong");
        }
    }else{
        printf("\nDay khong la 3 canh cua 1 tam giac");
    }
    return 0;
}
