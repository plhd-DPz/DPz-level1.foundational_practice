/*==========================================================
Viết chương trình nhập vào một danh sách họ tên gồm n người, danh sách này có tối đa 40 người, mỗi người có họ tên dài nhất là 50 ký tự.

Đầu vào

Dòng thứ nhất là số nguyên n
n dòng còn lại, mỗi dòng là một họ tên của 1 người
Đầu ra

n dòng ở đó mỗi dòng ghi họ tên của từng người
==========================================================*/

#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    //bug: buffer của scanf chứa 'số' và '\n'
    //nên khi đọc bằng fgets sẽ nhận chuỗi đầu tiên là chuỗi rỗng -> phải getchar()
    getchar();
    char list[n][50];
    int i;
    for (i=0;i<n;i++){
        fgets(list[i], 50, stdin);
        int len=strlen(list[i]);
        if (list[i][len-1]=='\n')
            list[i][len-1]='\0';
    }
    for (i=0;i<n;i++){
        printf("%d. %s\n", i+1, list[i]);
    }
    return 0;
}