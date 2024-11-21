#include <stdio.h> 

void bài_1();
void bài_2();
void bài_3();
void bài_4();

int main(){
     //bài_1();
     //bài_2();
    // bài_3();
    bài_4();
    return 0;
}

void bài_1(){
    //Khai báo và nhập dữ liệu
    //C.1 : Bình thường man
    int n;   //Số phần tử thực tế
    int mang[50];  //Số phần tử tối đa trong mảng là 50
                   //Nếu n < 50 -> gây ra lãng phí
                   //Nếu n > 50 -> tràn ô nhớ
    printf("Nhập số phần tử: ");
    scanf("%d", &n);
    printf("Nhập giá trị mảng\n");
    for (int i = 0; i < n; i++){
        printf("a[%d] =", i);
        scanf("%d", &mang[i] );
    }
    // Tỉnh trung bình cộng các số chia hết cho 3
    int tong = 0;
    int dem = 0;
    for (int i = 0; i < n; i++){
        if (mang[i] % 3 == 0){
            tong += mang[i];
            dem++;
        }
    }
    if (dem == 0){
        printf("Không có số nào chia hết cho 3\n");
    }
    else{
        float tbc = (float)tong/dem;
        printf ("Trung bình cộng = %.2f", tbc);
    }
}

void bài_2(){
    //Khai báo mảng 
    //C.2 
    int n;
    printf("Nhập số phần tử đi: ");
    scanf("%d", &n);
    int mang[n];   //Ưu điểm : Loại trừ khả năng dư thừa của mảng 
                   //Khuyết điểm : mảng không thể thay đổi số phần tử
    printf("Nhập giá giá trị mảng\n");
    for ( int i = 0; i < n; i++){
        printf("a[%d]", i);
        scanf("%d", &mang[i]);
    }
    //Tìm GTNN, GTLN trong mảng
    int min = mang[0];
    int max = mang[0];
    for (int i = 0; i < n; i++) {
        if (mang[i] > max){
            max = mang[i];

        }
        if (mang[i] < min ){
            min = mang[i];
        }
    }
    // In kết quả 
    printf("Giá trị lấn nhất là %d\n", max);
    printf("Tại vị trí: "); 
    for (int i = 0; i < n; i++){
        if (mang[i] == max){
            printf("%d, ", i);
        }
    }
    printf("\nGiá trị nhỏ nhất là %d\n", min);
    printf("Tại vị trí: ");
    for (int i = 0; i < n; i++){
        if (mang[i] == min){
            printf("%d, ", i);
        }
        
    }

}

void bài_3(){
    //Khai báo và nhập mảng 
    //C.3 - không biết số phần từ 
    //      cho điều kiện dừng 
    int n = 0;
    int mang[50];

    printf ("Nhập mã cho đến khi nhập vào số 0 thì dừng\n");
    while (n < 50){
        printf("a[%d]=", n);
        scanf("%d", &mang[n]);
        if (mang[n] == 0){
            break;
        }
        else {
            n++;
        }

    }
    //Sắp xếp 
    int temp;
    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            if (mang[i] < mang[j]){   //Nếu sắp xếp giảm dần -> i < j
                                      //Nếu sắp xếp tăng dần -> i > j
                //Thực hiện hoán vị 
                temp = mang[i];
                mang[i] = mang[j];
                mang[j] = temp;

            }
        }
    }
    //In kết quả 
    printf("Mảng sau khi sắp xếp\n");
    for (int i = 0; i < n; i++){
        printf("%d ", mang[i]);
    }
    
}

void bài_4(){
        int so_cot, so_hang;
        printf("Nhập số cột: ");
        scanf("%d", &so_cot); 
        printf("Nhập số hàng: ");
        scanf("%d", &so_hang);
        int mang[so_hang][so_cot];

        printf("Nhập giá trị cho ma trận\n");
        for (int i = 0; i < so_hang; i++ ){
            for (int j = 0; j < so_cot; j++){
                printf("a[%d, %d] = ",i, j);
                scanf("%d", &mang[i][j]);
            }
        }

    // Tính bình phương
    for (int i = 0; i < so_hang; i++){
        for (int j = 0; j < so_cot; j++){
            mang[i][j] = mang[i][j] *mang[i][j];
        }
    }

    //Hiển thị kết quả 
    printf("Mảng bình phương\n");
    for (int i = 0; i < so_hang; i++){
        for (int j = 0; j < so_cot; j++){
            printf("%d ", mang[i][j]);
        }
        printf("\n");

    }
}