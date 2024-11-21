#include <stdio.h>
#include <math.h>
//Khai báo hàm 
void Bai_1();
void Bai_2();
void Bai_2_1();
void Bai_3();
void Bai_Menu();
// 1. Tên hàm 
// 2. Hàm có trẻ về giá trị hay không 
//Nếu không trả về giá trị thì dùng -> "void"
//Nếu trả về giá trị thì -> xác định giá trị là gì
// 3. Xác định biến đưa vào  

int check_SNT (int n);
int check_SCP (int n);
//Hàm main 
int main(){
    //Bai_1();
    //Bai_2();
    //Bai_2_1();
    //Bai_3();
    Bai_Menu();
    return 0;
}

//Triển khai code
void Bai_1(){
    //Khai báo biến 
    int min, max;
    //Nhập dữ liệu 
    printf("Nhập min: ");
    scanf("%d", &min);
    printf("Nhập max: ");
    scanf("%d", &max);
    if (min > max){
        printf("Nhập sai rồi! Nhập lại! Min phải nó hơn max!!\n");
        return;
    }
    //Tính tbd của các số chia hết cho 2
    int tong = 0; 
    int dem = 0;
    for(int i = min; i <= max; i++){
        if (i % 2==0){
            tong += i;       //tong = tong + i;
            dem++;           //dem = dem + 1; 
        }
    }
    if(dem == 0){
        printf("Không có số nào chia hết cho 2từ %d đến %d\n", &min, &max);
    }
    else {
        float tbc = (float) tong/dem;
        printf("TBC các số chia hết cho 2 là : %.2f", tbc);
    }
}
void Bai_2(){
    //Xác định một số có phải số nguyên tố hay không 

    //Khai báo biến 
    int a;
    //Nhập giá trị 
    printf("Nhập 1 số nguyên a: ");
    scanf("%d", &a); 
    //Xác định SNT
    if(check_SNT(a)==0){
        printf("%d Không phải là SNT\n",a);
    }
    else{
        printf("%d Là SNT",a);
    }
    
} 
void Bai_2_1(){
    //Hiển thị các SNT từ min tới max
    //Với min, max được nhập vào từ bàn phím 
    //Khai báo biến 
    int min, max;
    //Nhập giá trị 
    printf("Nhập min=");
    scanf("%d", &min);
    printf("Nhập max=");
    scanf("%d", &max);
    if(min > max){
        printf("Min phải nhỏ hơn max\n");
        return;
    }
    //Hiển thị kết quả 
    int flag = 0;
    for(int i = min; i<= max; i++){
        if (check_SNT(i) == 1){
            if(flag == 0){
                printf("Các SNT là : ");
                flag = 1;
            } 
            printf("%d ", i);
        }

    }
    if (flag == 0){
        printf("Không có SNT nào từ %d tới %d\n", &min, &max);
    }
}
void Bai_3(){
    int a;
    printf("Nhập số a: ");
    scanf("%d", &a);
    if(check_SCP(a) == 0){
        printf("%d không phải là SCP\n",a);

    }
    else{
        printf("%d là SCP\n",a);
    }

}
void Bai_Menu(){
    //Khai báo lựa chọn
    int chon;
    do{
        //Hiên thị danh sách
        printf("\n\n\n--------------------Menu--------------------\n");
        printf("1. Tính TCB các số chia hết cho 2 từ min tới max\n");
        printf("2. Xác định SNT\n");
        printf("3. Xác định SCP\n");
        printf("0. Cook\n");
        printf("--------------------------------------------------\n");
        //Nhập lựa chọn 
        printf("Nhập lựa chọn: ");
        scanf("%d", &chon);
        //Xử lý lựa chọn
        switch(chon){
            case 1:
                printf("1. Tính TCB các số chia hết cho 2 từ min tới max\n");
                Bai_1();
            break;
            case 2:
                printf("2. Xác định SNT\n");
                Bai_2();
            break;
            case 3:
                printf("3. Xác định SCP\n"); 
                Bai_3();
            break; 
            case 0: 
                printf("Bye Bye Bye\n");
            break;
            default:
                printf("Chứa năng này chưa làm\n");
            break;
        }
        //Tạm dừng khoảng 5s
        printf("Nhấp phím bất kì để tiếp tục");
        char ch = getchar();
        ch = getchar();

    }while (chon != 0);
    
}
int check_SNT (int n){
    //Những hàm do chúng ta xây dựng, thông thương coi như là biến đầu vào đã có giá trị 
    //Số nguyên tố phải là số nguyên từ 2 trở lên 
    if(n<2){
        return 0;
    }
    //Nếu n chia hết cho các số từ 2 tới n-1 
    //---> Đây không phải số nguyên tố
    for (int i = 2; i < n; i++){
        if(n % i==0){
            return 0;   //Khẳng định đây không phải là SNT 
                        // -> Kết thúc chương trình và trả về 0
        }
    }
    //Kết thúc vòng lặp -> n không chưa hết cho số nào từ 2 tới n-1
    //-> n là SNT
    return 1;
}
int check_SCP (int n){
    if(n < 2){
        return 0;
    }
    for(int i = 1; i * i <=n; i++){
        if (i * i == n){
            return 1;
        }
    }
    return 0; 
}
int check_SCP_2 (int n){
    if (n < 2){
        return 0; 
    }
    int i = (int)sqrt(n);
    if (i * i ==n){
        return 1; 
    }
    else{
        return 0;
    }
}