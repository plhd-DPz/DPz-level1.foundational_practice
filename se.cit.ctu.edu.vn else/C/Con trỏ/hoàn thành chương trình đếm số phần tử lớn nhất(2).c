/*==========================================================
Hãy hoàn thành chương trình sau để nhập n số nguyên vào mảng A dùng con trỏ p và đếm xem có bao nhiêu phần tử bằng phần tử lớn nhất;

#include <stdio.h>
int main () {
    int i, n, A[100];
    scanf("%d", &n);
    int *p = A;
    for (i = 0; i <n; i++)
        scanf("%d",&A[i]);
    for (i = 0; i <n; i++)
        printf("%d ", A[i]);
   // printf("\n")    ;
    //////////////////////////////////    
    //Viết lệnh của bạn để đếm số phần tử có nội dung lớn nhất trên mảng mà chỉ dùng biến con trỏ p, không được dùng biến mảng A
 // Trong trường hợp mảng rỗng thì in báo lỗi "Mang rong!". 
// In theo mẫu: Noi dung phan tu lon nhat la: XX va co YY phan tu.
   
    //////////////////////////////////
    
    return 0;
}
==========================================================*/

if (n == 0) {
    printf("Mang rong!");
    return 0;
}
int max = *p, count = 1;  //coi như phần tử đầu tiên là max
for (i = 1; i < n; i++) {
    if (*(p + i) > max) {
        max = *(p + i);
        count = 1;
    } else if (*(p + i) == max) {  //nếu gặp phần tử trùng với max thì count++
        count++;
    }
}
printf("\n");
printf("Noi dung phan tu lon nhat la: %d va co %d phan tu", max, count);

//lưu ý: phần printf không có dấu chấm "." ở cuối