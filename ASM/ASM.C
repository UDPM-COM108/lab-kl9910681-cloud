#include <stdio.h>
#include <stdlib.h>

int main() {
   int luachon;
   printf("------------------------------------------------------------\n");
   printf("-------MENU CHUONG TRINH ASSIGNMENT-LA THE NAM-PS49582------\n");
   printf("------------------------------------------------------------\n");
   printf("Cac chuc nang:\n");
   printf("Chuc nang 1: Kiem tra so nguyen\n");
   printf("Chuc nang 2: Tim uoc so chung va boi so chung cua 2 so\n");
   printf("Chuc nang 3: Chuong trinh tinh tien cho quan karaoke\n");
   printf("Chuc nang 4: Tinh tien dien\n");
   printf("Chuc nang 5: Doi tien\n");
   printf("Chuc nang 6: Tinh lai suat vay ngan hang, vay tra gop\n");
   printf("Chuc nang 7: Vay tien mua xe\n");
   printf("Chuc nang 8: Sap xep thong tin sinh vien\n");
   printf("Chuc nang 9: Game FPOLY-LOTT\n");
   printf("Chuc nang 10: Chuong trinh tinh toan phan so\n");
   printf("Chuc nang 0: Thoat chuong trinh\n");
   printf("Moi ban nhap lua chon: ");
   scanf("%d", &luachon);
   switch (luachon) {
        case 1:
             printf("chuc nang 1\n");
             break;
        case 2:
             printf("chuc nang 2\n");
                break;
        case 3:
             printf("chuc nang 3\n");   
                break;
        case 4:
             printf("chuc nang 4\n");
                break;  
        case 5:
             printf("chuc nang 5\n");
                break;
        case 6:
             printf("chuc nang 6\n");
                break;
        case 7:
             printf("chuc nang 7\n");
                break;
        case 8:
             printf("chuc nang 8\n");
                break;
        case 9:
             printf("chuc nang 9\n");
                break;
        case 10:
             printf("chuc nang 10\n");
                break;
         case 0:
         printf("Thoat chuong trinh.\n");
        
        default:
         printf("Lua chon khong hop le.\n");
         break;
}
while (luachon != 0);

return 0;
 }