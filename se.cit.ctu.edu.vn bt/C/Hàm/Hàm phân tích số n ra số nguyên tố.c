/*
Viết hàm phân tích số n ra số nguyên tố.

Khuôn dạng (Prototype)

Tên hàm (function name): factorize
Tham số (parameters):
n - số cần phân tích, kiểu: int (
)
Kiểu trả về (return type): không có
Thân hàm (Body)

Phân tích và in ra các ước số nguyên tố của n theo mẫu
n = p1 x p2 x ... x pk



Ví dụ

n = 100

In ra:

100 = 2 x 2 x 5 x 5
Giải thích N = 100 = 2 x 2 x 5 x 5
*/

void factorize(int n){
    int first=1;
    printf("%d = ",n); 
    for (int f=2;f*f<=n;f++){//chạy tới khi f=sqrt(n)
        while (n%f==0){
            if (!first) printf(" x ");
            printf("%d",f);
            n/=f;
            first=0;
        }
    }
    if (n>1){  //n còn lại nếu lớn hơn 1 thì là phần factorize cuối
        if (!first) printf(" x ");
        printf("%d",n);
    }
    return;
}

//độ phức tạp thuật toán O(sqrt(n))
