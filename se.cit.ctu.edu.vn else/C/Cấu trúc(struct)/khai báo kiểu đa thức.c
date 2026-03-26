/*==========================================================
Đa thức là một biểu thức đại số gồm nhiều đơn thức, ví dụ: (xem trong đề)

Như thế, để biểu diễn một đa thức ta cần lưu các đơn thức có trong đa thức này.

Cho cấu trúc DonThuc dùng để lưu trữ một đơn thức như sau:

typedef struct {<br>    double he_so;<br>    int bac;<br>} DonThuc;
Ta có thể biểu diễn một đa thức bằng một mảng các DonThuc.

Hãy viết khai báo struct DaThuc dùng để lưu trữ 1 đa gồm các trường:

A: mảng các DonThuc (có thể chứa tối đa 100 đơn thức)
so_luong: số lượng đơn thức có trong đa thức
==========================================================*/

struct DaThuc{
	DonThuc A[100];
	int so_luong;
};

//mảng phải có số phần tử tối đa