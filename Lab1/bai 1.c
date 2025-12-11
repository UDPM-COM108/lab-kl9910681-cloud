#include <stdio.h>

int main(){
    //printf("Hello World");//in ra man hinh Hello world
    //printf("\nHello world");
    int a,b;
    
    char ten[10];
    printf("nhap a va b:");
    scanf("%d %d",&a,&b);
    printf("nhap vao ten toi:");
    scanf("%s",ten);
    printf("\nXin chao toi ten la: %s",ten);
    return 0;

}