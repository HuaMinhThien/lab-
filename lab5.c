#include <stdio.h>
#include <math.h>



void Bai_1();
int Tim_Max(int a, int b, int c);
void Bai_2();
int check_NamNhuan(int nam);
//có hai kiểu khai báo biến
// biến tham trị(sau khi chạy xong hàm, biến đầu vào vẫn giữ nguyên )
//         void Hoan_Vi(int a, int b);
// biến tham chiếu (đưa biến vòa hàm -> mọi thay dôidr trong hàm sẽ dẫn đến thay đổi cho biến đầu vào)  
//         void Hoan_vi(int * a, int * b);
// Lưu ý : Đối với dữ liệu đầu vào là kiểu măng(Lab 6), kiểu chuỗi (Lab 7), kiểu dữ liệu có cấu trúc (Lab 8) thì mặc định là kiểu tham chiếu 
// -> không có dấu * khi khai báo những dữ liệu đầu vào sẽ thay đổi theo hàm
void Bai_3(); 
void Hoan_Vi(int *a,int *b); 
int main (){
    //Bai_1();
    //Bai_2();
    Bai_3();
    return 0;
}
int Tim_Max(int a, int b, int c){
    int max = a ;
    if (b>max){
        max = b;
    }
    if (c>max){
        max = c;
    }
    return max; 
}
void Bai_1(){
    int a, b, c;
    printf("Nhập a đi: ");
    scanf("%d", &a);
    printf("Nhập b đi: ");
    scanf("%d", &b);
    printf("Nhập c đi: ");
    scanf("%d", &c);
    printf("Số lớn nhất là: %d", Tim_Max(a, b, c) );
}

int check_NamNhuan (int nam){
    if (nam % 400 ==0 ){
        return 1;
    }
    if (nam % 4 == 0 && nam % 100 != 0){
        return 1;
    }
    return 0;
}
void Bai_2(){
    int nam;
    printf("Nhập cho đúng số năm: ");
    scanf("%d", &nam);
    if (check_NamNhuan(nam) == 1){
        printf("Năm %d là năm nhuận\n", nam);
    }
    else{
        printf("Năm %d không là năm nhuận\n", nam);
    }
}
void Hoan_Vi(int *a, int *b){
    //*a = *a + *b;
    //*b = *a - *b;
    //*a = *a - *b;
    int temp = *a;
    *a = *b;
    *b = temp;

}
void Bai_3(){
    int a,b;
    printf("Nhập a vào: ");
    scanf("%d", &a);
    printf("Nhập b vào: ");
    scanf("%d", &b);
    printf("\nTrước hoán vị a=%d, b=%d\n ", a, b);
    Hoan_Vi(&a, &b);
    printf("Sau hoán vị a=%d, b=%d", a, b);
} 