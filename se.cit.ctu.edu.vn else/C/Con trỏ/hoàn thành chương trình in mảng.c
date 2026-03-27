/*==========================================================
Hãy hoàn thành chương trình sau để nhập n số nguyên vào mảng A dùng con trỏ p;

#include <stdio.h>
int main () {
    int i, n, A[100];
    scanf("%d", &n);
    int *p = A;
    for (i = 0; i <n; i++)
        scanf("%d ",&A[i]);

    //////////////////////////////////    
    //Viết lệnh của bạn để in ra các phần tử trên mảng, mà chỉ dùng biến con trỏ p, không được dùng biến mảng A
    //////////////////////////////////
    
    return 0;
}
==========================================================*/

for (i=0;i<n;i++){
	printf("%d ",*(p+i));
}