#include <stdio.h>
#include <math.h>

int main(){
    /*//BÀI 1: TÍNH TRUNG BÌNH TỔNG CỦA CÁC SỐ TỰ NHIÊN CHIA HẾT CHO 2
    int min, max;
    float tong = 0, bienDem = 0, trungBinh = 0;
    int i = min;
    printf ("nhap min:");
    scanf("%d", &min);
    printf ("nhap max:");
    scanf("%d", &max);
    while (i <= max){
        if (i % 2==0);
        tong +=i;
        i ++;
        bienDem ++;
    }
    trungBinh = tong / bienDem;
    printf("Trung binh tong la: %f", trungBinh);*/
    //Bài 2: XÁC ĐỊNH SỐ NGUYÊN TỐ
    int x, i, count = 1;
    printf("Nhap X:");
    scanf("%d", &x);
     for (i = 2; i < x; i++) {
        if (x % i == 0) {
            count++;
        }
    }
    printf("\n");
    if (count == 1) {
        printf("%d la so nguyen to\n", x);
    } else {
        printf("%d khong phai la so nguyen to\n", x);
    }





    return 0;
}