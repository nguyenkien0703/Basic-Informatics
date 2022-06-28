/*

SẮP XẾP THÍ SINH

Bài làm tốt nhất
Hãy sắp xếp danh sách thí sinh theo tổng điểm giảm dần.

Mỗi thí sinh gồm các thông tin:

Mã thí sinh: là một số nguyên, tự động tăng. Tính từ 1.
Tên thí sinh, ngày sinh
Điểm môn 1, điểm môn 2, điểm môn 3
Input:

Dòng đầu chứa số thí sinh. Mỗi thí sinh viết trên 3 dòng:

Dòng 1: Tên thí sinh
Dòng 2: Ngày sinh
Dòng 3,4,5: 3 điểm thi tương ứng. Các điểm thi đều đảm bảo hợp lệ (từ 0 đến 10).
Output:

In ra danh sách thí sinh đã sắp xếp theo tổng điểm giảm dần. Nếu 2 thí sinh bằng điểm nhau thì thí sinh nào xuất hiện trước sẽ viết trước.  Mỗi thí sinh viết trên một dòng gồm: mã, tên, ngày sinh và tổng điểm. Các thông tin cách nhau đúng 1 khoảng trống.  Điểm tổng được làm tròn đến 1 số sau dấu phẩy.

Ví dụ

Input

Kết quả

3

Nguyen Van A

12/12/1994

3.5

7.0

5.5

Nguyen Van B

1/9/1994

7.5

9.5

9.5

Nguyen Van C

6/7/1994

4.5

4.5

5.0

2 Nguyen Van B 1/9/1994 26.5

1 Nguyen Van A 12/12/1994 16.0

3 Nguyen Van C 6/7/1994 14.0

 
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
struct sv{
    int id;
    char ten[100];
    char ns[100];
    float d1,d2,d3;
};
typedef struct sv sv;
float tong(sv a){
    return a.d1+a.d2+a.d3;
}
void sx(sv a[], int n){
    for(int i=0;i<n;i++){
        int  pos=i-1;
        sv x = a[i];
        while(pos>=0&&tong(x)>(tong(a[pos]))){
            a[pos+1]=a[pos];
            --pos;
        }
        a[pos+1]=x;

    }
}



int main(){
    int n ;
    scanf("%d",&n);
    sv a[n];
    for(int i=0;i<n;i++){
		getchar();
        gets(a[i].ten);
        a[i].id=i+1;
        scanf("%s",a[i].ns);
        scanf("%f%f%f", &a[i].d1, &a[i].d2, &a[i].d3);
	}
    sx(a,n);
    for(int i = 0; i < n; i++){
        printf("%d %s %s %.1f\n",a[i].id,a[i].ten,a[i].ns,a[i].d1+a[i].d2+a[i].d3);
    }

}