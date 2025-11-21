#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int luachon;
    printf("Chon truong trinh:\n");
    printf("1. Tinh hoc luc\n");
    printf("2. Giai phuong trinh bac 1\n");
    printf("3. Giai phuong trinh bac 2\n");
    printf("4. Tinh tien dien\n");
    printf("0. Thoat\n");
    printf("Nhap lua chon cua ban: ");
    scanf("%d", &luachon);
    switch (luachon){
    case 1:
    //Bài 1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC
     float dtb;
     printf("Nhap vao diem trung binh:");
     scanf("%f", &dtb); 
     if (dtb>=9)
        printf("Hoc luc xuat sac");
    else if (dtb>=8 && dtb<9)
        printf("Hoc luc gioi"); 
    else if (dtb>=6.5 && dtb<8)
        printf("Hoc luc kha");  
    else if (dtb>=5 && dtb<6.5)
        printf("Hoc luc trung binh");
    else
        printf("Hoc luc yeu");
        break;
    case 2:
    //Bài 2: GIẢI PHƯƠNG TRÌNH BẬC 1
    float   A, B;
    printf("Nhap a:");
    scanf("%f", &A);    
    printf("Nhap b:");
    scanf("%f", &B);
    if (A==0){
        if (B==0)
            printf("Phuong trinh vo so nghiem");
        else
            printf("Phuong trinh vo nghiem");
    }
    else
    {
        float x;
        x= -B/A;
        printf("Nghiem phuong trinh la: %f", x);
    }
        break;
    case 3:
    //Bài 3: GIẢI PHƯƠNG TRÌNH BẬC 2
    float a, b, c, d, x, x1,x2,x3, delta;
    printf("Nhap a:");
    scanf("%f", &a);
    printf("Nhap b:");
    scanf("%f", &b);
    printf("Nhap c:");
    scanf("%f", &c);
    if (a==0){
        if (b==0){
            if (c==0)
                printf("Phuong trinh vo so nghiem");
            else
                printf("Phuong trinh vo nghiem");}
        else {
            x3 = -c/b;
            printf("Phuong trinh co nghiem: x=%f", x3);}}
    else{
        delta= b*b - 4*a*c;}
        if(delta<0)
            printf("Phuong trinh vo nghiem");
        else if (delta==0){
            x = -b/(2*a);
            printf("\nPhuong trinh co nghiem kep: x1=x2=%f", x);}
        else {
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            printf("Phuong trinh co 2 nghiem phan biet: x1=%f, x2=%f", x1, x2);}
            break;
    case 4:
    //Bài 4: TÍNH TIỀN ĐIỆN
    float sodien,tien;
    printf("Nhap so dien tieu thu:");
    scanf("%f", &sodien);
    if (sodien>0&&sodien<=50){
       tien = sodien *1678;
         printf("So tien dien phai tra la: %f", tien);}
    else if (sodien>50&&sodien<=100){
        tien = sodien *1734;
        printf("So tien dien phai tra la: %f", tien);}
    else if (sodien>100&&sodien<=200){ 
        tien = sodien *2014;
        printf("So tien dien phai tra la: %f", tien);}
    else if (sodien>200&&sodien<=300){
        tien = sodien *2536;
        printf("So tien dien phai tra la: %f", tien);}
    else if (sodien>300&&sodien<=400){
        tien = sodien *2834;
        printf("So tien dien phai tra la: %f", tien);}
    else if (sodien>400){
        tien = sodien *2927;
        printf("So tien dien phai tra la: %f", tien);}
        break; 
    case 0:
                printf("Thoat chuong trinh.\n");
                return 0;
                default:
                printf("Lua chon khong hop le.\n");
                break;
        }
    while (luachon != 0);

    return 0;
    }



    
 
    
