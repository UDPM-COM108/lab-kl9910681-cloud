#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int luachon;
    printf("\nMENU\n");
    printf("1. Tinh trung binh tong cua cac so tu nhien chia het cho 2\n");
    printf("2. Xac dinh so nguyen to\n");
    printf("3. Xac dinh so chinh phuong\n");
    printf("4. Doi tu so thap phan sang nhi phan\n");
    printf("0. Thoat menu\n");
    printf("Nhap lua chon cua ban: ");
    scanf("%d", &luachon);
    switch (luachon){
        case 1:{
    //BÀI 1: TÍNH TRUNG BÌNH TỔNG CỦA CÁC SỐ TỰ NHIÊN CHIA HẾT CHO 2
    int min, max;
    float tong = 0, bienDem = 0, trungBinh = 0;
    int i = min;
    printf ("nhap min:");
    scanf("%d", &min);
    printf ("nhap max:");
    scanf("%d", &max);
    while (i <= max){
        if (i % 2==0)
        tong +=i;
        i ++;
        bienDem ++; }
    trungBinh = tong / bienDem;
    printf("Trung binh tong la: %f", trungBinh);
            break;}
        case 2:{
    //Bài 2: XÁC ĐỊNH SỐ NGUYÊN TỐ
    int x, i, count = 0;
    printf("Nhap X:");
    scanf("%d", &x);
     for (i = 2; i < x; i++) {
        if (x % i == 0) {
            count++;}
    }
    printf("\n");
    if (count == 0) {
        printf("%d la so nguyen to\n", x);}
         else {
        printf("%d khong phai la so nguyen to\n", x);}
            break;}
        case 3:{
    //Bài 3: XÁC ĐỊNH SỐ CHÍNH PHƯƠNG
    int x, i, c;
    printf("Nhap X:");
    scanf("%d", &x);
    if (x < 0) {
        printf("%d khong phai la so chinh phuong\n", x);}
        c = sqrt(x);
    if (c * c == x) {
        printf("%d la so chinh phuong\n", x);}
    else {
        printf("%d khong phai la so chinh phuong\n", x);}
            break;}
        case 4:{
    //Bài 4: ĐỔI TỪ SỐ THẬP PHÂN SANG NHỊ PHÂN
    int n, nhiphan[32], i = 0, np;
    printf("Nhap so:");
    scanf("%d", &n);
    np = n;
    while (n > 0) {
        nhiphan[i] = n % 2;
        n = n / 2;
        i++;}
    printf("So %d doi sang nhi phan la: ", np);
    for (i = i - 1; i >= 0; i--) {
        printf("%d", nhiphan[i]);}
            break;}
            case 0: {
            printf("Thoat chuong trinh.\n");
             break;}
        default: {
         printf("Lua chon khong hop le.\n");
                break;
            } 
        }
return 0;
 }