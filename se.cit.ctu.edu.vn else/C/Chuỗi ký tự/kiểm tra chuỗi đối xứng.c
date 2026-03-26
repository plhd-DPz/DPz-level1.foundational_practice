/*==========================================================
Viết chương trình nhập vào 1 chuỗi từ bàn phím và cho biết chuỗi nhập có đối xứng (PALINDROME) hay không? 

Ví dụ: ABBA là chuỗi đối xứng; ABCD là chuỗi không đối xứng

Đầu vào

Chuỗi đầu vào có tối đa 500 ký tự
Đầu ra

Dòng đầu tiên là chuỗi nhập
Dòng thứ hai ghi YES nếu chuỗi đối xứng, NO ngược lại
==========================================================*/

#include <stdio.h>
#include <string.h>
int main(){
    char s[500];
    fgets(s,500,stdin);
    int len=strlen(s);
    if (s[len-1]=='\n'){
        s[len-1]='\0';
        len--;
    }
    puts(s);
    for (int l=0,r=len-1;l<r;l++,r--){ //kĩ thuật 2 pointers
        if (s[l]!=s[r]){
            printf("NO");
            return 0;  //ngắt main luôn sau khi in NO
        }
    }
    printf("YES"); //nếu không in NO và ngắt main thì kết quả là YES
    return 0;
}