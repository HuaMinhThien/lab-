#include<stdio.h>
#include<string.h>

void Bai1();
void Bai2();
void Bai3();

int main() {
    Bai2();
    
    return 0;
}

void Bai1(){
    char s[50];     // Ngôn ngữ C không có khái niệm rõ về string
                    // nên phải khai báo bằng char
                    // /0 có nghĩa là NUL
    printf("\n\n Nhập chuỗi: ");
    fgets(s, 50, stdin);    // fegts là hàm để nhập chuỗi  

    // Xác định số lượng nguyên âm và phụ âm trong chuỗi
    strupr(s); // Hàm chuyển về chữ hoa
              // strlwr - Hàm chuyển về chữ thường
    int count_NA = 0, count_PA = 0;
    // strlen(s) - 1 trả về chiều dài thực tế của chuỗi
    for (int i = 0; i < strlen(s) - 1; i++ ) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            if (s[i] == 'A'
                || s[i] == 'E'
                || s[i] == 'I'
                || s[i] == 'O'
                || s[i] == 'U') {
                    count_NA++;
            }
            else {
                count_PA++;
            
            printf(" Tổng số kí tự là: %d \n",i);
            }
        }
    }
    
    printf(" Số nguyên âm là: %d \n", count_NA);
    printf(" Số phụ âm là: %d \n", count_PA);
}

void Bai2(){
    char userSys[] = "admin\n"; // \n là cái Enter
    char passSys[] = "12345\n"; // Không có \n là không chạy được

    char userName[50];
    char passWord[50];

    printf("\n Nhập UserName: ");
    fgets(userName, 50, stdin);
    printf(" Nhập PassWord: ");
    fgets(passWord, 50, stdin);

    if(strcmp(userName, "") == 0 || strcmp(userName, "\n") == 0){
        printf(" Username không được để trống \n");
        return;
    }
    if (strcmp(userName, userSys) != 0) {
        printf(" Tài khoản không tồn tại \n");
        return;
    }
    if(strcmp(passWord, "") == 0 || strcmp(passWord, "\n") == 0){
        printf(" PassWord không được để trống \n");
        return;
    }
    if (strcmp(passWord, passSys) != 0) {
        printf(" Sai mật khẩu \n");
        return;
    }
    printf(" Đăng nhập thành công \n");
}


