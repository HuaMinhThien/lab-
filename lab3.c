#include <stdio.h>
#include <math.h>
void Bai_1();   //khai báo hàm nên có void 
void Bai_2_1();
void Bai_2_2();
void Bai_3();
void Bai_Menu();

int main(){
 //Bai_1(); //gọi hàm nên không có void đầu 
 //Bai_2_1();
 //Bai_2_2();
 //Bai_3();
 Bai_Menu();
  return 0; 
}

//Triển khai code 
void Bai_1(){ //Phần triển khai và khai báo phải giống nhau 

 //Khai báo biến 
 float diem;

  //Nhập giá trị điểm (0 - 10)
 printf("Nhập điểm : ");
 scanf("%f", &diem);
 if(diem < 0 || diem > 10){ // || : hoặc    && : và 
    printf("Diem phai trong khoan 0 - 10\n");
    return ; //Kết thúc hàm và trả về giá trị
 }
 //Xét học lực
 if (diem >= 9){
    printf("Học lực xuất sắc\n");
 }
 else if (diem >= 8 ){   //Điều kiện <= 9 là điều kiện thừa
    printf ("Học lực giỏi\n");
 }
  else if (diem >= 7){
    printf("Học lực khá\n");
  }
  else if (diem >=6){
    printf("Học lực trung bình\n");
  }
  else if (diem >=5){
    printf("Học lực kém\n");
  }
  else {
    printf("Học lực yếu");
  }
}

void Bai_2_1(){
    //Giải phương trình bậc nhất : ax + b = 0 '
    //Khai báo hệ số 
    int a, b;
    //Nhập hệ số 
    printf("Nhập hệ số a, b: ");
    scanf("%d%d", &a, &b);
    
    if (a == 0){
        if (b == 0){
            printf("PT có VSN\n");
        }
        else{
            printf("PT VN\n");

        }
    }
    else{
        float x  = -(float)b/a;
        printf("PT có 1 nghiệm : x = %.2f", x);

    }
}

void Bai_2_2(){
  //Giải phương trình bậc hai ax^2 + bx + c = 0
  int a, b ,c; 
  //Nhập hệ số 
  printf("Nhập hệ số a : \n");
  scanf("%d", &a);
  printf("Nhập hệ số b: \n");
  scanf("%d", &b);
  printf("Nhập hệ số c: \n");
  scanf("%d", &c);
  //Giải phương trình 
  if (a==0){
    if(b==0){
      if (c==0){
        printf("PT có VSN\n");

      }
      else {
        printf("PTVN\n");

      }
    }
    else {
      float x = -(float)c/b;
      printf("PT có 1 nghiệm x = %2.f", x);

    }

  }
  else {
    float delta = pow(b, 2) - 4 * a * c; 
    if (delta < 0){
      printf("PTVN\n");

    }
    else if (delta == 0){
      float x = -(float)b/(2 * a);
      printf("PT có 1 nghiệm x =%.2f", x);

    }
    else {
      float x1 = (-b + sqrt(delta))/(2 * a);
      float x2 = (-b - sqrt(delta))/(2 * a);
      printf("PT có 2 nghiệm phân biệt\n");
      printf("x1 = %.2f\tx2 = %.2f\n", x1, x2);
    }
    }

  }

void Bai_3(){
  //Khai báo biến 
  int so_dien;
  //Nhập giá trị 
  printf("Nhập số điện sử dụng : ");
  scanf("%d", &so_dien);
  //Tính tiền điện
  int tien_dien;
  if(so_dien <= 0){
    tien_dien = so_dien * 1678;
  }
  else if (so_dien <= 100) {
    tien_dien = 50 * 1678 + (so_dien - 50) * 1734;
  }
  else if (so_dien <=200){
    tien_dien = 50 * 1678 +  50 * 1734 + (so_dien - 100) * 2014;
  }
  else if (so_dien <=300){
    tien_dien = 50 * 1678 +  50 * 1734 + 100 * 2014 + (so_dien - 200 ) * 2534;
  }
  else if (so_dien <=400){
     tien_dien = 50 * 1678 +  50 * 1734 + 100 * 2014 + 100  * 2534 + (so_dien - 300) * 2834 ;
  }
  else {
     tien_dien = 50 * 1678 +  50 * 1734 + 100 * 2014 + 200  * 2534 + 300 * 2834 + (so_dien - 400) * 2927 ;
  }
 //Nhập kết quả 
 printf ("Tiền điện tháng này : %d", tien_dien );
}

void Bai_Menu(){
  //Khai báo biến
  int chon;
  //Liệt kê chức năng 
  printf("-------------------------------Menu-------------------------------\n");
  printf("1. Tính học lực\n");
  printf("2. Giải phương trình bậc 1\n");
  printf("3. Giải phương trình bậc 2\n");
  printf("4. Tính tiền điện\n");
  printf("------------------------------------------------------------------\n");
  //Nhập giá trị cho biến 
  printf("Nhập lựa chọn : ");
  scanf("%d", &chon);
  //Xử lý lựa chọn 
  switch(chon){
 case 1 :
    printf("\n\n\n Tính học lực\n");
    Bai_1();
    break;
 case 2 :
    printf("\n\n\n Giải phương trình bậc 1\n");
    Bai_2_1();
    break;
 case 3:
    printf("\n\n\n Giải phương trình bậc 2\n");
    Bai_2_2();
    break; 
 case 4:
    printf("\n\n\n Tính tiền điện\n");
    Bai_3();
    break;
    default : 
    printf("\n\n\n Chức năng này chưa được xây dựng");
    break; 
  }
}