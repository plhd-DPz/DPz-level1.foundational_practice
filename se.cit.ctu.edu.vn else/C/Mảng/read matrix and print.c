/*==========================================================
Write a program to read a matrix of integer numbers and print it to the screen.

Input

The first line contains m and n,  separated by a space - m: number of rows, n: number of columns (0 < m, n <= 50).
m following lines, each contains n numbers, separated by a space.
Output

print the matrix to the screen.
==========================================================*/

#include <stdio.h>
int main(){
	int m, n, i, j;
	scanf("%d%d",&m,&n);
	int a[m][n];
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
