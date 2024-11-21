//Khai báo thư viện 
#include <stdio.h> 
#include <math.h>

//Khai báo hằng
#define pi 3.141592658
//Khai báo hàm
//Chỉ có trong C/C++ 
void Bai_1();
void Bai_2();
void Bai_3();
void Bai_4();
void Bai_5();
// Chương trình chính 
int main(){
   Bai_1();
   Bai_2();
   Bai_3();
  Bai_4();
    return 0; 
}

//Triển khai code
//Hàm viết hoa
//Biến viết thường 
void Bai_1(){
    //Khai báo các biến 
    //int - số nguyên 
    // float - số thực
    //char - ký tự 
    //không có định nghĩa kiểu chuỗi string 
    int a, b; 
    //Nhập dữ liệu cho biến 
    //prinf - hiển thị ra màn hình 
    //scanf - nhập dữ liệu biến 
    printf("Bài 1\n");
   printf("Nhap bien a= ");
    //%d - int - số nguyên 
    //%f - float - số thực 
    //%c - char - ký tự 
    scanf("%d" , &a);
    printf("Nhap bien b= ");
    scanf("%d" , &b);
 //Tính tổng và hiệu
 int tong = a + b;
 int hieu = a - b;
 //Xuất kết quả
 printf("Tong la : %d + %d = %d\n",a ,b, tong);
 printf("Hieu la : %d - %d = %d\n", a, b, hieu);
 printf("Tich la : %d * %d = %d\n", a, b, a*b); 
 printf("Thuong la :%d / %d = %d\n", a, b, a / b);
}

void Bai_2(){
    //Khai báo Chiều dài Chiều rộng
    int a, b;
    //Nhập dữ liệu
    printf("Bài 2\n");
    printf("Chieu dai a:");
    scanf("%d", &a);
    printf("Chieu rong b:");
    scanf("%d", &b);
    //Tính chu vi về diện tích hình chữ nhật
    int chu_vi = (a + b) * 2;
    int dien_tich = a * b;
    //In kết quả
    printf("Chu vi la : %d\n", chu_vi);
    printf("Dien tich la : %d\n", dien_tich);
}

void Bai_3(){
    //Khai báo biến 
    int r;
    //Nhập bán kính
    printf("Bài 3\n");
    printf("Nhap ban kinh : ");
    scanf("%d", &r);
    //Tính diện tích và chu vi 
    float chu_vi = 2 * r * pi;
    float dien_tich = pi * pow(r,2);
    //In kết quả 
    printf("Chu vi : %.2f\n", chu_vi);
    printf("Dien tich : %.2f\n", dien_tich);

}

void Bai_4(){
    float toan;
    float ly;
    float hoa;
    printf("Bài 4\n");
    printf("Diem toan:");
    scanf("%f", &toan);
    printf("Diem ly:");
    scanf("%f", &ly);
    printf("Diem hoa:");
    scanf("%f", &hoa);
    float DHStoan = toan *3;
    float DHSly = ly * 2;
    float DHShoa = hoa ;
    float DTB = (DHStoan + DHSly + DHShoa) /6;
    printf("DTB : %.2f\n", DTB);
}
