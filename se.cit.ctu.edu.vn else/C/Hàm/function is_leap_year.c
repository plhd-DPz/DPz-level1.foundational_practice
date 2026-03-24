/*==========================================================
The normal year contains 365 days but leap year contains 366 days. 
This extra day is added to the February month, that’s why we get February 29. 
Mathematically, Years that are perfectly divisible by 4 are called as Leap years except the century years. 
Century year’s means they end with 00 such as 1200, 1300, 2400, 2500 etc (Obviously they are divisible by 100). 
For these century years we have to calculate further to check the Leap year.

If the century year is divisible by 400 then that year is a Leap year
If the century year is not divisible by 400 then that year is a Leap year
Write a function that check whether a year is a leap year or not.

Prototype

function name: is_leap_year
parameters: an integer n - the year to be checked (0 <= n <= 10000)
return type: integer
Body

return 1 if n is a leap year, otherwise return 0.
==========================================================*/

int is_leap_year(int n){
    if ((n%4==0 && n%100!=0)|| n%400==0) return 1;
    return 0;
}
