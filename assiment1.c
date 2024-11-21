#include <stdio.h>

void Menu();
void bai1();
void bai2();
void bai3();
void bai4();
void bai5();    //bỏ đi
void bai6();
void bai7();    //bỏ đi
void bai8();
void bai9();    //bỏ đi 
void bai10(); 

int main(){
    Menu();
    //bai1();
    //bai2();
    //bai3();
    //bai4();
    //bai5();
    //bai6();
    //bai7();
    //bai8();
    //bai9();
    //bai10();
    return 0;
}

void Menu(){
    int chon;
    do{
        printf("\n=========Menu=========\n");
        printf("1. Kiếm tra số nguyên\n");
        printf("2. Tìm UCLN và BCNN\n");
        printf("3. Chương trình tình tiền cho quán Karaoke\n");
        printf("4. Tình tiền điện\n");
        printf("5. Chức năng đổi tiền\n");
        printf("6. Tính lãi suất vay ngân hàng, vay trả góp\n");
        printf("7. Chương trình vay tiền mua xe\n");
        printf("8. Sắp xếp thông tin sinh viên\n");
        printf("9. Xây dựng game FPLOY-LOTT (2/15)\n");
        printf("10. Xây dựng chương trình tính toán phân số\n");
        printf("0. Ra về\n");
        printf("==========================\n");
        printf("Hãy nhập con số bạn muốn: ");
        scanf("%d", &chon);
        switch(chon){
            case 1: 
             printf("1. Kiếm tra số nguyên Input\n\n");
             //bai1 ();
             int a;
             printf("Bóc số đi: ");
             scanf("%d", &a);
             printf("Nothing new\n");
             break;
            case 2:
             //bai2();
             printf("2. Tìm UCLN và BCNN\n\n");
             break;
            case 3:
             //bai3();
             printf("3. Chương trình tình tiền cho quán Karaoke\n\n");
             break;
            case 4:
             //bai4();
             printf("4. Tình tiền điện\n\n");
             break;
            case 5:
             //bai5();
             printf("5. Chức năng đổi tiền\n\n");
             break; 
            case 6:
             //bai6();
             printf("6. Xây dựng chức năng tính lãi suất vay ngân hàng, vay trả góp\n\n");
             break;
            case 7:
             //bai7();
             printf("7. Xây dựng chương trình vay tiền mua xe\n\n");
             break;
            case  8:
             //bai8();
              printf("8. Sắp xếp thông tin sinh viên\n\n");
              break;
            case 9:
             //bai9();
             printf("9. Xây dựng game FPLOY-LOTT (2/15)\n\n");
             break;
            case 10:
             //bai10();
             printf("10. Xây dựng chương trình tính toán phân số\n\n");
             break;
            case 0: printf("\nChúc mừng bạn đã quay vào ô ra ngoài\n\n");
              
              break;
            default:
             printf("Không có đâu mà chọn\n\n");
            
        }
        printf("Nhấn đại phím enter để làm tiếp\n");
        char ch = getchar(); //Nhận phím enter từ trên 
        ch = getchar(); //Đợi nhấn phím enter để đi tiếp 

       
    }while(chon !=0);
    
}
