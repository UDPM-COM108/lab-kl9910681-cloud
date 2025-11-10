/*//#BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ
#include <stdio.h>
int main(){
    int x,y,tong,hieu;
    printf("nhap vao x:");
    scanf("%d", &x);
    printf("nhap vao y:");
    scanf("%d", &y);
    tong = x + y;
    hieu = x - y;
    printf("Tong 2 so la: %d", tong);
    printf("\nHieu 2 so la: %d", hieu);
return 0;
}*/
/*//#BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
#include <stdio.h>
int main (){
    int cdai, crong, S, P;
    printf("nhap chieu dai:");
    scanf("%d", &cdai);
    printf("nhap chieu rong:");
    scanf("%d", &crong);
    S = cdai * crong;
    P = (cdai + crong) * 2;
    printf("Dien tich hcn la: %d", S);
    printf("\nChu vi hcn la: %d", P);
return 0 ;
}*/
/*//#Bài 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
#include <stdio.h>
#include <math.h>//thư viện toán học

#ifndef M_PI//định nghĩa số PI
#define M_PI 3.14//số PI
#endif
int main (){
    double r, S, P;//số thực
    printf("Nhap ban kinh:");
    scanf("%lf", &r);//%lf: nhập số thực
    P = 2 * M_PI * r;
    S = M_PI * r * r;
    printf("Dien tich hinh tron la:%6f", S);//%6f: in số thực
    printf("\nChu vi hinh tron la:%6f", P);
return 0;
}*/