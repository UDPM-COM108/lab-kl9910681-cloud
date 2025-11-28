#include <stdio.h>

int main(){ 
    //BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG
    int n, i, count=0;
    printf("Nhap so phan tu n:");
    scanf("%d", &n);
    int mang[n];
    for (int i=0; i<n; i++){
    printf("Nhap phan tu thu %d: ", i + 1);
    scanf("%d", &mang[i]);}
    float tb, tong = 0;
    for (i=0; i<n; i++) {
        if(mang[i]%3==0){
        tong+=mang[i];
            count++;}}
    if(count> 0) {
        tb = tong/count;
    printf("Trung binh tong cac so chia het cho 3 = %f", tb);
    }
    else 
    printf("Khong co so nao chia het cho 3\n");

    //BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG
     int n, i;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int mang[n];
    for (i = 0; i < n; i++) {
        printf("Nhap mang[%d]: ", i);
        scanf("%d", &mang[i]);}
    int max = mang[0], min = mang[0];
    for (i = 1; i < n; i++) {
        if(mang[i] > max){
            max = mang[i];}
        if(mang[i] < min){
            min = mang[i];}
        }
    printf("Gia tri lon nhat: %d\n", max);
    printf("Gia tri nho nhat: %d\n", min);

    //Bài 3: Sắp xếp mảng theo thứ tự giảm dần
     int n, i, j, temp;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int mang[n];
    for (i = 0; i < n; i++){
        printf("Nhap mang[%d]: ", i);
        scanf("%d", &mang[i]);}
    for (i = 0; i < n - 1; i++){
        for (j = i + 1; j < n; j++) {
            if (mang[i] < mang[j]) {
                temp = mang[i];
                mang[i] = mang[j];
                mang[j] = temp;}
        }
    }
    printf("\nMang sau khi sap xep giam dan:\n");
    for (i = 0; i < n; i++){
        printf("mang[%d] = %d\n", i, mang[i]);}

    //Bài 4: Tính bình phương các phần tử trong mảng 2 chiều
    int n, m, i, j;
        printf("nhap mang 2 chieu:");
        scanf("%d %d", &n, &m);
    int mang[n][m];
    printf("\nNhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++) {
            printf("mang[%d][%d] = ", i, j);
            scanf("%d", &mang[i][j]);}
    }
    printf("\nbinh phuong cac phan tu trong mang la:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", mang[i][j] * mang[i][j]);}
        printf("\n");}
return 0;
}