/*==========================================================
Hãy hoàn thành chương trình sau để nhập n số nguyên vào mảng A dùng con trỏ p;

#include <stdio.h>
int main () {
    int i, n, A[100];
    scanf("%d", &n);
    int *p = A;
    for (i = 0; i <n; i++)
        scanf("%d",&A[i]);
    //////////////////////////////////    
    //Viết lệnh của bạn để tìm phần tử có nội dung lớn nhất trên mảng mà chỉ dùng biến con trỏ p, không được dùng biến mảng A
    // Trong trường hợp mảng rỗng thì in báo lỗi "Mang rong!".
    //////////////////////////////////
    
    return 0;
}
==========================================================*/

if (n == 0) {
    printf("Mang rong!");
    return 0;
}
int max = *p;
for (i = 1; i < n; i++) {
    if (*(p + i) > max) max = *(p + i);
}
printf("Gia tri lon nhat: %d", max);

//phiên bản đơn giản hơn của câu tương tự(bản này không kêu đếm số lượng)