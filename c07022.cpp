/*
QUẢN LÝ SINH VIÊN - 2

Bài làm tốt nhất
Thông tin về sinh viên gồm có:

1. mã sinh viên là số nguyên tự động tăng;

2. tên sinh viên;

3. điểm sinh viên là số thực gồm điểm môn A, môn B, môn C.

 

Viết chương trình thực hiện 3 chức năng:

1. thêm mới

2. cập nhật điểm theo mã sinh viên

3. hiển thị danh sách các sinh viên có điểm 3 môn tăng dần (theo thứ tự xuất hiện)

Input:

- Dòng thứ nhất là lựa chọn chức năng thực hiện

- Dòng thứ hai

+ Nếu lựa chọn ở dòng thứ nhất là 1 thì nhập số sinh viên sẽ thêm mới

+ Nếu lựa chọn ở dòng thứ nhất là 2 thì nhập mã sinh viên sẽ sửa đổi

- Dòng tiếp theo là thông tin sinh viên

Chức năng 3 cũng là kết thúc của luồng input

 

Output:

- Nếu lựa chọn là 1 thì in ra số sinh viên được thêm

- Nếu lựa chọn là 2 thì in ra mã sinh viên được sửa

- Nếu lựa chọn là 3 thì in ra danh sách theo mô tả dưới đây (các thông tin cách nhau một khoảng trắng)

Ví dụ:

Input

Output

1

2

nguyen van hai

8.5 5.5 7.5

tran van tuan

8.5 6.5 9.0

2

2

tran van nam

5.5 6.0 7.0

3

2

2

2 tran van nam 5.5 6.0 7.0
*/

#include <stdio.h>
#include <stdlib.h>

struct SinhVien{
	int ma;
	char ten[100];
	float a, b, c;
};
typedef struct SinhVien SV;

int cmp(const void *a, const void *b){
	SV* x = (SV*)a;
	SV* y = (SV*)b;
	if(x->a + x->b + x->c < y->a + y->b + y->c) return -1;
	else return 1;
}

int main(){
	SV a[1000];
	int lc, n;
	while(1){
		scanf("%d", &lc);
		if(lc == 1){
			scanf("%d", &n);
			for(int i = 0; i < n; i++){
				getchar();
				gets(a[i].ten);
				scanf("%f%f%f", &a[i].a, &a[i].b, &a[i].c);
				a[i].ma = i + 1;
			}
			printf("%d\n", n);
		}
		else if(lc == 2){
			int id; scanf("%d", &id);
			getchar();
			gets(a[id-1].ten);
			scanf("%f%f%f", &a[id-1].a, &a[id-1].b, &a[id-1].c);
			printf("%d\n", id);
		}
		else{
//			qsort(a, n, sizeof(SV), cmp);
//			for(int i = 0; i < n; i++){
//				printf("%d %s %.1f %.1f %.1f\n", a[i].ma, a[i].ten, a[i].a, a[i].b, a[i].c);
//			}
			for(int i = 0; i < n; i++){
				if(a[i].a < a[i].b && a[i].b < a[i].c)
					printf("%d %s %.1f %.1f %.1f\n", a[i].ma, a[i].ten, a[i].a, a[i].b, a[i].c);
			}
			break;
		}
	}
}