/*
SỐ LỚN NHẤT TRONG BẢNG

Bài làm tốt nhất
Cho một bảng hình chữ nhật kích thước vô hạn. Ban đầu, tất cả các ô đều có giá trị bằng 0.

Có N phép thực hiện, mỗi bước, bạn được phép tăng giá trị của hình chữ nhật con từ ô (1, 1) tới ô (a, b) lên 1 đơn vị.

Sau N bước, số lớn nhất trong bảng là X. Nhiệm vụ của bạn là hãy đếm số lần xuất hiện của X?

Input:

Dòng đầu tiên là số nguyên N (1 ≤ N ≤ 100).

N dòng tiếp theo, mỗi dòng gồm 2 số nguyên a và b mô tả một bước (1 ≤ a, b ≤ 10^6).

Output: 

In ra số lần xuất hiện của số lớn nhất trong bảng.

Ví dụ:

Input:

Output:

3

2 3

3 7

4 1

 

2

 

 

Giải thích test: Trạng thái cuối cùng của hình chữ nhật là:

1 0 0 0 0 0 0

2 1 1 1 1 1 1

3 2 2 1 1 1 1

3 2 2 1 1 1 1
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int n; scanf("%d", &n);
	int row, col;
	scanf("%d%d", &row, &col);
	for(int i = 0; i < n - 1; i++){
		int x, y;
		scanf("%d%d", &x, &y);
		if(x < row) row = x;
		if(y < col) col = y;
	}
	printf("%lld", 1ll * row * col);
}