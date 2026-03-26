/*==========================================================
Viết 1 hàm cho phép xóa ký tự ở vị trí p trng chuỗi st

Khuôn dạng (Prototype)

Tên hàm (function name): Delete()
Tham số (parameters):
p - kiểu int
st[] - kiểu char
Kiểu trả về (return type): void
Thân hàm (Body)

Cho phép xóa ký tự  ở vị trí p trong chuỗi st
==========================================================*/

void Delete(int p, char st[]){
	int i, n=strlen(st);
	for (i=p;i<n;i++){
		st[i]=st[i+1];
	}
	st[n-1]='\0';  //không bỏ dòng này vì có thể p là kí tự cuối
	return;
}