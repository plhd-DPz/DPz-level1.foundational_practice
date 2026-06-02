/*==========================================================
Viết hàm nhận vào một chữ ký tự c và trả về chữ cái in thường của ký tự c.

Khuôn dạng (Prototype)

Tên hàm (function name): lowCase
Danh sách tham số (parameters): c, kiểu ký tự.
Kiểu trả về (return type): ký tự
Thân hàm (Body)

Nếu c là chữ cái in HOA (A-Z) thì trả về chữ in thường của nó.
Ngược lại, trả về c.
==========================================================*/

char lowCase(char c){
    if (!(c>='A' && c<='Z')) return c;
    else return c+'a'-'A';
}
