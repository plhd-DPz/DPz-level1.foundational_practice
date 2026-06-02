/*==========================================================
Viết 1 hàm cho phép lấy chuỗi con từ vị trí pos, lấy number ký tự của một chuỗi đầu vào cho trước

Khuôn dạng (Prototype)

Tên hàm (function name): subString()
Tham số (parameters):
s[] - kiểu char
pos - kiểu int
number - kiểu in
Kiểu trả về (return type): char*
Thân hàm (Body)

Cho phép lấy về chuỗi con từ vị trí pos, lấy number ký tự của chuỗi đầu vào; kết quả trả về của hàm là con trỏ chỉ tới chuỗi kết quả
==========================================================*/

char* subString(char s[], int pos, int number){
	char *sub=malloc(number+1); //+1 để lưu '\0'
	int i;
	for (i=0;i<number;i++){
		*(sub+i)=s[pos+i];
	}
	*(sub+number)='\0'; //nhớ kết thúc chuỗi '\0'
	return sub;
}