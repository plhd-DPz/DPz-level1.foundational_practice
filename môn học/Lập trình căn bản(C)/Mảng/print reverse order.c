/*==========================================================
Write a program to enter n integer numbers and print them in reverse order.

Input

The first line contains n - number of numbers (0 < n <= 1000).
The second line contains n numbers, separated by a space.
Output

print n numbers in a line in reverse order.
==========================================================*/

#include <stdio.h>
int main(){
    int n, i;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    return 0;
}