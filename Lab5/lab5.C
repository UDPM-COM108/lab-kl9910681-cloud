#include <stdio.h>
 
void swap(int *x,int *y){
        int m;
        m = *x;
        *x = *y;
        *y = m;}
int main (){
    //Bai 1: Tìm số lớn nhất trong 3 số đã cho 
    float a,b,c;
    float max = a;
    printf("Nhap a, b, c:");
    scanf("%f %f %f", &a, &b, &c);
    if(b>max) max=b;
    if(c>max) max=c;
    printf("So lon nhat la: %f", max);

    //Bài 2: Tính năm nhuận
    int l;
    printf("Nhap nam can tinh:");
    scanf("%d", &l);
    if(l%400==0)
    printf("%d la nam nhuan", l);
    else if (l%4==0 && l%100!=0)    
    printf("%d la nam nhuan", l);
    else
    printf("%d khong phai nam nhuan", l);

    //Bài 3: Xây dựng hàm hoán vị
    int x,y;
    printf("Nhap x:");
    scanf("%d", &x);
    printf("Nhap y:");
    scanf("%d", &y);
    printf("Gia tri x, y truoc khi hoan vi:%d %d", x, y);
    swap(&x, &y);
    printf("\nGia tri x, y sau khi hoan vi:%d %d", x, y);

    return 0;
}