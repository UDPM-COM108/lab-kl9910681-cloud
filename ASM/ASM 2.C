#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

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

    void uocboichung(){
        int x,y,l,n;
        printf("Nhap 2 so:");
        scanf("%d %d", &x, &y);
        for(int i=1; i<=x && i<=y; i++){
            if(x % i ==0 && y % i ==0){
                l=i;
            }
        }
        n = (x*y)/l;
        printf("\nUoc chung lon nhat la: %d", l);
        printf("\nBoi chung nho nhat la: %d", n);
    }

    void karaoke(){
        int a,b,c,tien;
        printf("Nhap gio bat dau");
        scanf("%d", &a);
        printf("Nhap gio ket thuc");
        scanf("%d", &b);
        if (a<12 || b>23 || a>=b){
            printf("Quan khong hoat dong trong thoi gian tren! Vui long nhap lai!");
            return;
        }
        int t = b - a;
        if (t<=3){
            tien = t * 50000;
        }
        else {
            tien = 150000+(t - 3)*50000;
        }
        if(t>3){
            tien *=0.7;
        }
        if(a>=14 && b<=17){
            tien *=0.9;
        }
        printf("Tong gio hat la: \n", t);
        printf("So tien can phai thanh toan la: ", tien);
    }

    void tiendien(){
        float a, tong;
        printf("Nhap so dien(KwH): ");
        scanf("%f", &a);
       if (a>0&&a<=50){
        tong = a *1678;
         printf("So tien dien phai tra la: %f", tong);}
    else if (a>50&&a<=100){
        tong = a *1734;
        printf("So tien dien phai tra la: %f", tong);}
    else if (a>100&&a<=200){ 
        tong = a *2014;
        printf("So tien dien phai tra la: %f", tong);}
    else if (a>200&&a<=300){
        tong = a *2536;
        printf("So tien dien phai tra la: %f", tong);}
    else if (a>300&&a<=400){
        tong = a *2834;
        printf("So tien dien phai tra la: %f", tong);}
    else if (a>400){
        tong = a *2927;
        printf("So tien dien phai tra la: %f", tong);}
    }

    void laisuat (){
        double a;
        double lai = 5;     
        int thang = 12;     
        printf("Nhap so tien muon vay: ");
        scanf("%lf", &a);
        double n = a / thang;
        double c = a;
        printf("\n%-5s %-15s %-15s %-15s %-15s\n",
            "Thang", "Lai phai tra", "Goc phai tra",
            "So tien phai tra", "So tien con lai");
        for (int i = 1; i <= thang; i++) {
            double l = c * (lai / 100.0);
            double t = n + l;
            c -= n;
            if (c < 1e-6) c = 0;
            printf("%-5d %-15.0f %-15.0f %-15.0f %-15.0f\n",
                i, l, n, t, c);
    }
    }

void sapxep() {
    int n;
    char ten[100][100];
    float diem[100];
    char hocluc[100][100];
    printf("Nhap so sinh vien: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("\nNhap ten sinh vien %d: ", i + 1);
        scanf("%s", ten[i]);
        do {         
            printf("Nhap diem sinh vien %d: ", i + 1);
            scanf("%f", &diem[i]);
            if (diem[i] < 0 || diem[i] > 10)
                printf("Diem khong hop le! Yeu cau nhap lai.\n");
        } while (diem[i] < 0 || diem[i] > 10);
        if (diem[i] >= 9) strcpy(hocluc[i], "Xuat sac");
        else if (diem[i] >= 8) strcpy(hocluc[i], "Gioi");
        else if (diem[i] >= 7) strcpy(hocluc[i], "Kha");
        else if (diem[i] >= 5) strcpy(hocluc[i], "Trung binh");
        else strcpy(hocluc[i], "Yeu");
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (diem[i] < diem[j]) {

                float tmpd = diem[i];
                diem[i] = diem[j];
                diem[j] = tmpd;

                char tmpTen[100];
                strcpy(tmpTen, ten[i]);
                strcpy(ten[i], ten[j]);
                strcpy(ten[j], tmpTen);

                char tmpXL[100];
                strcpy(tmpXL, hocluc[i]);
                strcpy(hocluc[i], hocluc[j]);
                strcpy(hocluc[j], tmpXL);
            }
        }
    }
    printf("\nDanh sach sinh vien:\n");
    printf("%-15s %-10s %-15s\n", "Ten", "Diem", "Hoc luc");
    for (int i = 0; i < n; i++) {
        printf("%-15s %-10.2f %-15s\n", ten[i], diem[i], hocluc[i]);
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
    printf("Chuong trinh 3: Tinh tien cho quan Karaoke.\n");
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
        case 2:{
            uocboichung();
            break;
        }
        case 3:{
            karaoke();
            break;
        }
        case 4:{
            tiendien();
            break;
        }
        case 6:{
            laisuat();
            break;
        }
        case 8:{
            sapxep();
            break;
        }
    }

    return 0;
}