#include <stdio.h>
#include <math.h>

// Hàm kiểm tra số chính phương
int kiemTraChinhPhuong(int n) {
    int canBacHai = sqrt(n);
    return (canBacHai * canBacHai == n);
}

// Hàm đếm số chính phương nhỏ hơn n
int demSoChinhPhuong(int n) {
    int soLuong = 0;
    for (int i = 1; i <= n; i++) {
        if (kiemTraChinhPhuong(i)) {
            soLuong++;
        }
    }
    return soLuong;
}

int main() {
    int n;
    n = 50;
    // Nhập giá trị n
    printf("Nhap n (n > 0): ");
    scanf("%d", &n);
    // Kiểm tra n có hợp lệ hay không
    if (n <= 0) {
        printf("n phai la so nguyen duong!\n");
        return 1;
    }

    // Đếm số lượng số chính phương
    int soLuongSoChinhPhuong = demSoChinhPhuong(n);

    // In ra màn hình
    printf("So luong so chinh phuong nho hon %d la: %d\n", n, soLuongSoChinhPhuong);
    printf("Danh sach cac so chinh phuong:\n");
    for (int i = 1; i <= n; i++) {
        if (kiemTraChinhPhuong(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}