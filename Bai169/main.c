#include <stdio.h>
#include <stdlib.h>

const long MAX = 1000000000;
void NhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap so %d:",i+1);
        scanf("%d",&a[i]);
    }
}
int soChanLonNhat(int a[], int n) {
    long min = MAX;
    for (int i = 0; i < n; i++) {
        if (a[i] < min && a[i] % 2 == 1)
            min = a[i];
    }
    if( min == MAX )
        return -1;
    else
        return min - 1;
}
int main() {
    int a[100];
    int n;
    printf("\nNhap so cac so:");
    scanf("%d",&n);
    NhapMang(a, n);
    if (soChanLonNhat(a, n) == -1)
        printf("\nMang khong co phan tu le");
    else
       printf("\nSo chan lon nhat nho hon tat ca cac so le la:%d ",soChanLonNhat(a,n));
    getch();
    return 0;
}

