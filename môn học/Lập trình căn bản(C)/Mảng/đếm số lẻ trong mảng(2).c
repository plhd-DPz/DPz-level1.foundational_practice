/*==========================================================
Viết chương trình nhập vào n số nguyên và lưu nó vào trong 1 mảng. Đếm xem có bao nhiêu số lẻ.

Đầu vào

Dòng đầu chứa số nguyên n (0 < n < 100).
Dòng thứ 2 chứa n số nguyên. Các số cách nhau 1 khoảng trắng.
Đầu ra

Dòng đầu tiên in số các số lẻ
Dòng thứ 2 in các số lẻ ra màn hình, ngăn cách bằng khoảng trắng. Nếu không có số lẻ nào in ra NONE.
==========================================================*/

#include <stdio.h>
int main(){
    int n, i;
    scanf("%d",&n);
    int a[n], odd[n], count=0;
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
        if (a[i]%2!=0){
            odd[count]=a[i];
            count++;
        }
    }
    if (count) printf("%d\n",count);
    else{
        printf("0\nNONE"); //trường hợp không có số lẻ
        return 0;
    }
    for (i=0;i<count;i++){
        printf("%d ",odd[i]);
    }
    return 0;
}