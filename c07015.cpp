/*

TÌM THỦ KHOA CỦA KỲ THI

Bài làm tốt nhất
Cho danh sách thí sinh gồm các thông tin: Mã thí sinh: là một số nguyên, tự động tăng, tính từ 1; Tên thí sinh, ngày sinh, điểm môn 1, điểm môn 2, điểm môn 3. Hãy tìm thủ khoa trong danh sách đó. Nếu có nhiều thí sinh có điểm bằng nhau và đều cao nhất thì in ra tất cả thí sinh đó theo mã tăng dần.

Input:

Dòng đầu chứa số thí sinh. Mỗi thí sinh viết trên 3 dòng: Dòng 1: Tên thí sinh, Dòng 2: Ngày sinh, Dòng 3,4,5: 3 điểm thi tương ứng. Các điểm thi đều đảm bảo hợp lệ (từ 0 đến 10).

Output: In ra các thủ khoa của kỳ thi, mỗi thí sinh 1 dòng, gồm mã, tên, ngày sinh và tổng điểm. Chú ý: nếu có nhiều thí sinh bằng điểm nhau và cao nhất thì in ra tất cả thí sinh đó theo thứ tự mã thí sinh tăng dần.

Ví dụ:

Input

Output

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
8.5
9.5
8.5

2 Nguyen Van B 1/9/1994 26.5
3 Nguyen Van C 6/7/1994 26.5

 
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




int main(){
    int n ;
    scanf("%d",&n);
    sv a[n];
    float diem_max=-1e9;
    for(int i=0;i<n;i++){
        getchar();
        a[i].id=i+1;
        gets(a[i].ten);
		scanf("%s",a[i].ns);
		scanf("%f%f%f",&a[i].d1,&a[i].d2,&a[i].d3);
		if((a[i].d1+a[i].d2+a[i].d3)>diem_max){
			diem_max=a[i].d1+a[i].d2+a[i].d3;
		}
		

    }
    for(int i=0;i<n;i++){
    	if(diem_max==(a[i].d1+a[i].d2+a[i].d3)){
    		printf("%d %s %s %.1f\n",a[i].id,a[i].ten,a[i].ns,a[i].d1+a[i].d2+a[i].d3);
		}
	}
    

}