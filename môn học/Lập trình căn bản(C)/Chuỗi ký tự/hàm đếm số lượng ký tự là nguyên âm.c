/*==========================================================
Viết 1 hàm cho phép trả về số lượng ký tự là nguyên âm ('a','e','o','u','i' - kể cả hoa thường) trong chuỗi nhập.

Khuôn dạng (Prototype)

Tên hàm (function name): countVowels()
Tham số (parameters):
s[] - kiểu char
Kiểu trả về (return type): int
Thân hàm (Body)

Trả về số lượng nguyên âm trong chuỗi s
==========================================================*/

int countVowels(char s[]){
    int count=0, i=0;
    while (s[i]!='\0'){
        switch (s[i]){
            case 'a': case 'e': case 'o': case 'u': case 'i':
            case 'A': case 'E': case 'O': case 'U': case 'I': 
            count++;
        }
        i++; //không tăng i thì lặp vô hạn
    }
    return count;
}

//đếm cả chữ in hoa, đọc kĩ đề