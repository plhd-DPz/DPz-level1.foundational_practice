/*==========================================================
Viết chương trình nhập vào n số nguyên và lưu nó vào trong 1 mảng. Sau đó tính tổng các phần tử trong mảng. 
In tổng và các số đã nhập ra màn hình.

Đầu vào

Dòng đầu chứa số nguyên n (0 < n < 100).
Dòng thứ 2 chứa n số nguyên. Các số cách nhau 1 khoảng trắng.
Đầu ra

Dòng đầu tiên in tổng các số đã nhập
Dòng thứ 2 in các số đã nhập, ngăn cách bằng khoảng trắng.
==========================================================*/

#include <stdio.h>
int main(){
    int n, i;
    scanf("%d",&n);
    int a[n], sum=0;
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("%d\n",sum);
    for (i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}