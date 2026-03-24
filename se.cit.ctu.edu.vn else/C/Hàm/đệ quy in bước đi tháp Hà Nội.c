/*==========================================================
Có 3 cây cọc và một chồng n đĩa có kích thước từ nhỏ đến lớn (không trùng kích thước). Các đĩa đều có lỗ bên trong để chồng vào các cây cọc. 
Ban đầu n đĩa được chồng vào cây cọc thứ nhất, đĩa lớn nhất ở dưới, và kích thước đĩa giảm dần từ dưới lên: (hình)

Nhiệm vụ của chúng ta là phải di chuyển n cái đĩa từ cọc A sang cọc C với ràng buộc là: Có một cái cọc trung gian là B, 
mỗi lần chỉ được di chuyển 1 cái đĩa từ một cọc đến cọc khác và đĩa to hơn không được xếp lên trên đĩa nhỏ hơn.

Ví dụ dưới đây cho thấy cách di chuyển 3 cái đĩa từ A sang C: (hình)

Viết 1 hàm đệ quy để mô tả các bước chuyển n đĩa từ cọc A sang cọc C với B là cọc trung gian.

Khuôn dạng (Prototype)

Tên hàm (function name): Move
Tham số (parameters):
n - kiểu int
A, B, C  - kiểu char
Kiểu trả về (return type): void
Thân hàm (Body)

Dùng đệ quy để mô tả các bước chuyển đĩa.
==========================================================*/

void Move(int n, char a, char b, char c){
    if (n==1){
        printf("%c -> %c\n", a, c);
        return;
    }
    Move(n-1, a, c, b);
    Move(1, a, b, c);
    Move(n-1, b, a, c);
}
