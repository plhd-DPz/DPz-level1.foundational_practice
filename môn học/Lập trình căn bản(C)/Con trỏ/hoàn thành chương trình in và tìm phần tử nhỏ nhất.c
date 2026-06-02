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
    //Viết lệnh của bạn để in mảng và tìm phần tử có nội dung nhỏ nhất trên mảng, mà chỉ dùng biến con trỏ p, không được dùng biến mảng A
    //////////////////////////////////
    
    return 0;
}
==========================================================*/

if (n==0){
	printf("Mang rong!");
	return 1;
}
int min=*p;
for (i=0;i<n;i++){
	printf("%d ",*(p+i));
	if (*(p+i)<min) min=*(p+i);
}
printf("\nGia tri nho nhat: %d",min);