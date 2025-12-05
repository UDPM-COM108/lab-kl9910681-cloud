#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void kiemtraso(){
    int x,i,c,dem=0;
        printf("Nhap so: ");
        if( scanf("%d", &x) ==1){
        printf("%d la so nguyen\n", x);}
        else{
        printf("%d khong phai so nguyen\n", x);}
        //tinh so nguyen to
        for(i = 2; i<x; i++){
            if(x % i == 0){
                dem++;
            }}
        if(dem == 0){
            printf("%d la so nguyen to\n", x);
        }
        else{
            printf("%d khong phai la so nguyen to\n", x);
        }
        //tinh so chinh phuong 
        if(x<0)
            printf("%d khong phai la so chinh phuong\n", x);
        c= sqrt(x);
        if(c * c == x){
            printf("%d la so chinh phuong\n",x);
        }
        else {
            printf("%d khong phai la so chinh phuong\n", x);
        }
    }
    int main (){
    int luachon;
    printf("------------------------------------------------------------\n");
    printf("-------MENU CHUONG TRINH ASSIGNMENT-LA THE NAM-PS49582------\n");
    printf("------------------------------------------------------------\n");
    printf("Cac chuc nang cua chuong trinh: \n");
    printf("Chuong trinh 1: Kiem tra so nguyen.\n");
    printf("Chuong trinh 2: Tim uoc so chung va boi so chung cua 2 so.\n");
    printf("Chuong trinh 3: Tinh tien dien cho quan Karaoke.\n");
    printf("Chuong trinh 4: Tinh tien dien.\n");
    printf("Chuong trinh 5: Doi tien.\n");
    printf("Chuong trinh 6: Tinh lai xuat ngan hang vai tra gop.\n");
    printf("Chuong trinh 7: Vay tien mua xe.\n");
    printf("Chuong trinh 8: Sap xep thong tin sinh vien.\n");
    printf("Chuong trinh 9\n");
    printf("Chuong trinh 10\n");
    printf("Moi ban chon truong trinh: ");
    scanf("%d", &luachon);
    switch (luachon){
        case 1:{
           kiemtraso();
            break;
        }
    }

    return 0;
}