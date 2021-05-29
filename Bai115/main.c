#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char name[30];
    float a,b;

void nhapDuLieu(){
    fflush(stdin);
    printf("\nNhap ho ten:");
    gets(name);
    printf("\nNhap diem toan:");
    scanf("%f",&a);
    printf("\nNhap diem van:");
    scanf("%f",&b);
}

float DTB(){
    return (a+b)/2;
}

void xuatDuLieu(){
    printf("\nTen:%s",name);
    printf("\nDiem toan:%g",a);
    printf("\nDiem van:%g",b);
    printf("\nDiem trung binh:%g",DTB());
}
int main(){
    nhapDuLieu();
    xuatDuLieu();
    return 0;
}
