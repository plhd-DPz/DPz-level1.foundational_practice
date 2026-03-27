/*==========================================================
Viết 1 hàm cho phép trả về n phần tử đầu tiên của 1 cấp số cộng với công sai là d (phần tử đầu tiên là 1).



Khuôn dạng (Prototype)

Tên hàm (function name): getSequence()
Tham số (parameters):
n - kiểu int (n>0), số phần tử của cấp số cộng
d - kiểu int, công sai
Kiểu trả về (return type): int* (con trỏ int)
Thân hàm (Body)

Con trỏ chỉ đến phần tử đầu tiên của dãy cấp số cộng gồm n phần tử.
==========================================================*/

int *getSequence(int n, int d){
    int *pn=malloc(sizeof(int)*n); 
    int i, mul=1;
    for (i=0;i<n;i++){
        pn[i]=mul;  //phần tử đầu tiên là 1
        mul+=d;     //tính phần tử tiếp theo cho vòng lặp sau
    }
    return pn;  //lưu ý đừng return *pn
}

//hàm trả về con trỏ thì phải malloc để tạo mảng động