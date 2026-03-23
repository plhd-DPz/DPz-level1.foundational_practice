/*
Số đối xứng hay còn gọi là “palindrome”. Ví dụ: 123321 là số đối xứng, 12012 không phải số đối xứng. Viết 1 hàm kiểm tra 1 số có là palindrome hay không?

Khuôn dạng (Prototype)

Tên hàm (function name): isPalindrome
Tham số (parameters):
n - số cần kiểm tra, kiểu: int (
)
Kiểu trả về (return type): int
Thân hàm (Body)

Nếu n là số đối xứng trả về 1
Ngược lại trả về 0.
*/

int isPalindrome(int n){
    int r=0, bn=n, digit;
    while (n!=0){
        digit=n%10;
        r=r*10+digit;
        n/=10;
    }
    if (r==bn) return 1;
    return 0;
}
