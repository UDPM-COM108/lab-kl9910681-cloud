
#include <stdio.h>
#include <math.h>
#define pi 3.14//số PI

int main(){
    //#BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ
    int x,y,tong,hieu;
    printf("nhap vao x:");
    scanf("%d", &x);
    printf("nhap vao y:");
    scanf("%d", &y);
    tong = x + y;
    hieu = x - y;
    printf("Tong 2 so la: %d", tong);
    printf("\nHieu 2 so la: %d", hieu);

    //#BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
    int cdai, crong, chuvi, dientich;
    printf("\nnhap chieu dai:");
    scanf("%d", &cdai);
    printf("nhap chieu rong:");
    scanf("%d", &crong);
    dientich = cdai * crong;
    chuvi = (cdai + crong) * 2;
    printf("Dien tich hcn la: %d", dientich);
    printf("\nChu vi hcn la: %d", chuvi);

    //#Bài 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
    double r, S, P;//số thực
    printf("\nNhap ban kinh:");
    scanf("%lf", &r);//%lf: nhập số thực
    P = 2 * pi * r;
    S = pi * r * r;
    printf("Dien tich hinh tron la: %2f", S);//%2f: in số thực
    printf("\nChu vi hinh tron la: %2f\n", P);

    //#Bài 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH
    float toan, ly, hoa, tb;
    printf("nhap diem toan:");
    scanf("%f", &toan);
    printf("nhap diem ly:");
    scanf("%f", &ly);
    printf("nhap diem hoa:");
    scanf("%f", &hoa);
    tb = toan * 3 + ly * 2 + hoa;
    printf("Diem trung binh la: %f\n", tb);

    //Bài 5: TÍNH CHU VI, DIỆN TÍCH TAM GIAC VUÔNG
    float a, b, c, dtich, cvi;
    printf("nhap 2 canh goc vuong:");
    scanf("%f %f", &a, &b);
    c= sqrt(a*a + b*b);
    cvi = a + b + c;
    dtich = a * b * 1/2;
    printf("dien tich tam giac vuong la: %f", dtich);
    printf("\nchu vi tam giac vuong la: %f", cvi);
return 0;
}