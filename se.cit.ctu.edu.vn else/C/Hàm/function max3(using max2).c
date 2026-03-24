/*==========================================================
You are given a function

int max2(int a, int b);
which returns the bigger between a and b.

Write a C function that takes 3 integer numbers and returns the biggest using the function max2.

Prototype

function name: max3
parameters: three integers a, b and c.
return type: integer
Body

return the biggest among a, b and c.
==========================================================*/

int max3(int a, int b, int c) {
    return max2(max2(a, b), c);  
}
//hàm max 2 trả về số lớn hơn trong 2 số. ở đây max2(max2(a, b), c) tức là dùng max2 lấy số lớn hơn trong 2 số a và b(gọi tạm số lớn đó là x cho dễ hiểu);
                                                                     //rồi dùng max2 lần nữa bên ngoài để lấy số lớn hơn trong 2 số x và c
