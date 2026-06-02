/*==========================================================
Viết chương trình nhập vào n số nguyên và cho biết những số nguyên tố đã nhập

Đầu vào

Dòng đầu tiên là n - số lượng các số nguyên (0 < n <= 1000).
Dòng thứ hai chứa n số nguyên, mỗi số cách nhau khoảng trắng
Đầu ra

Dòng đầu tiên là n số nguyên đã nhập, mỗi số cách nhau khoảng trắng
Dòng thứ 2 là số lượng các số nguyên tố 
Dòng thứ 3 là các số nguyên tố đã nhập
==========================================================*/

#include <stdio.h>
#include <math.h>

int main(){
    int n, i, j;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int nt[n], k=0;
    for (i=0;i<n;i++){
        printf("%d ",a[i]);
        if (a[i] < 2) continue;   // 0 and 1 không phải prime
        int prime = 1;
        for (j=2; j<=sqrt(a[i]); j++){
            if (a[i] % j == 0){
                prime = 0;
                break;
            }
        }
        if (prime){
            nt[k] = a[i];
            k++;
        }
    }
    printf("\n%d\n",k);
    for (i=0;i<k;i++){
        printf("%d ",nt[i]);
    }
    return 0;
}
