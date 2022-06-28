/*
TIẾN HÓA POKEMON

Bài làm tốt nhất
Rảnh rỗi, Tí đang ngồi chơi Pokemon Go, một game đã không còn mấy thịnh hành. Vì vậy, bắt pokemon dễ như ăn kẹo. Tí bắt được rất nhiều con pokemon và đầu tư mua được một số ít viên đá tiến hóa. Tuy nhiên, mỗi loại đá chỉ dùng được cho một loại pokemon. Với một con pokemon chủng P[i], Tí cần dùng K[i] viên đá để tiến hóa cho nó. Sau khi tiến hóa xong, Tí sẽ thu lại được thêm 2 viên đá nữa.

Không có việc gì làm nên Tí cho đống pokemon của mình tiến hóa hết một lượt. Các bạn hãy tính xem Tí có thể tiến hóa được bao nhiêu con, và loại pokemon nào được tiến hóa nhiều nhất?

Input

Dòng đầu tiên là N (N ≤ ≤ 70), số lượng loại pokemon mà Tí bắt được. Giả sử rằng Tí có vô hạn các con pokemon trong mỗi loại.

2N dòng tiếp theo, mỗi dòng gồm một xâu P[i], là loại pokemon mà Tí có. Tiếp theo là 2 số nguyên K[i] (10 ≤ K[i] ≤ 400) và M[i] (1 ≤ M[i] ≤ 10 000), lần lượt là số lượng viên đá cần để tiến hóa cho một con pokemon loại P[i], và số lượng viên đá loại i mà Tí có.

Output

Dòng đầu tiên in ra tổng số lượng các con pokemon được tiến hóa.

Dòng thứ hai in ra loại pokemon nào được tiến hóa nhiều nhất. Nếu có nhiều đáp án, hãy in ra tên loại pokemon xuất hiện sớm hơn trong danh sách.

Test ví dụ:

Input:

Output

5

Pidgey

12 36

Ivysaur

10 63

Charmander

35 96

Pikachu

12 32

Squirtle

15 10

15

Ivysaur

 

Giải thích test: Tí có thể tiến hóa cho 3 con Pidgey, 7 con Ivysaur, 2 con Charmander, 3 con Pikachu và 0 con Quirtle.
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct poke{
	char name[100];
	int fre, pos;
};

typedef struct poke poke;

int solve(int k, int m){
	int ans = 0;
	while(m >= k){
		int tmp = m / k;
		ans += tmp;
		m = m % k + 2 * tmp;
	}
	return ans;
}

int main(){
	int n; scanf("%d", &n);
	poke a[n];
	int sum = 0;
	for(int i = 0; i < n; i++){
		scanf("%s", a[i].name);
		int k, m;
		scanf("%d%d", &k, &m);
		a[i].fre = solve(k, m);
		sum += a[i].fre;
		a[i].pos = i;
	}
	printf("%d\n", sum);
	int res = 0, pos;
	for(int i = 0; i < n; i++){
		if(a[i].fre > res){
			res = a[i].fre; pos = i;
		}
	}
	printf("%s\n", a[pos].name);
}