/*==========================================================
Hãy hoàn thành chương trình sau để nhập n số nguyên vào mảng A dùng con trỏ p;

#include <stdio.h>
int main () {
    int i, n, A[100];
    scanf("%d", &n);
    int *p = A;
    //////////////////////////////////    
    //Viết lệnh của bạn ở đây (chỉ được dùng biến p, không được dùng biến A
    //////////////////////////////////
    for (i = 0; i <n; i++)
        printf("%d ", A[i]);
    return 0;
}
==========================================================*/

for (i=0;i<n;i++){
    scanf("%d", p+i);   //p là con trỏ sẵn nên không cần &
}

//nhớ tăng con trỏ sau mỗi vòng lặp bằng cách cộng i