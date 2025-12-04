#include <stdio.h>
#include <string.h>
void nguyenamphuam (char s[100]);
void dangnhap(char user[], int pass);
void timkytu (char s[]);

void nguyenamphuam (char s[100]){
    int i = 0, n = 0, p = 0;
    while (s[i++] != '\0'){
        if(s[i] == 'a' || s[i] == 'u' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o')
        n++;
        else {
            p++;
        }}
        printf("chuoi %s co chua: %d nguyen am va %d phu am",s,n,p);}

void dangnhap(char user[], int pass){
    char usersys[]= "admin";
    int passsys = 123456;
    if (strcmp(user, usersys) == 0 && pass == passsys){
        printf("Dang nhap thanh cong");
    } else{
        printf("Dang nhap that bai");
    }
}

void timkytu (char s[]){
int t = 0;
int dem = 1, m, j, k;
printf("cac ky tu xuat hien hon 2 lan: ");
for (m = 0; m < strlen(s); m++){
    for (j = m + 1; j < strlen(s); j ++ ){
        if (s[j] == s[m])
        dem++;
    }
    if( dem > 2){
    int dain=0;
    for(k = 0; k < m ;k++){
        if(s[k] == s[m]){
            dain=1;
            break;
            }
        }
        if (dain !=0){
            printf("%c", s[m]); 
            t =1;
        }
    }
}
if(t ==0)
    printf("khong co chu lap lai");
}

int main(){
    //BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1
    char s[100];
    printf("Nhap chuoi:");
    gets(s);
    nguyenamphuam(s);

    //BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD
    char user[100];
    int pass;
    printf("Nhap tai khoan: ");
    scanf("%s", user);
    printf("Nhap mat khau: ");
    scanf("%d", &pass);
    dangnhap(user, pass);

    //Bài 3: Cho chuỗi bất kì Tìm kí tự xuất hiện nhiều hơn 2 lần trong chuỗi đã nhập
    char s[200];
    printf("Nhap chuoi: ");
    gets(s);
    timkytu (s);
        
return 0;
}