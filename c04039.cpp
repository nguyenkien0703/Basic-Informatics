#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
/* Goi a[i] la k/c co the di chuyen bang i buoc di 
    a[0] = 0;
    a[i] = a[i-1] + ( i + 1 ) / 2 */

int main() {
    int m, n;
    int dis; //distance
    int steps;
    scanf( "%d %d", &m, &n );
    dis = n > m ? n - m : (m-n);//khoảng cách giữa điểm đầu và điểm cuiối 

    int len = 0, i = 0;
    steps = 0;//buóc nhảy 
    while ( len < dis ) {
        len += ( i + 1 ) / 2;//cứ chạy tay đi , 
        ++i; ++steps;
    }
    //kiểu như ví dụ dis=6 , mà len sát cận là 4 đi , thì vân nhỏ hơn chạy tiếp 
    // nhưng mà chạy xong thì nó đã lớn hơn dis rồi , nghĩa là nó đã lớn hơn dis 1 giá trị rất nhỏ 
    // và cần -- cái step đi là ac
    if ( dis != 0 ) --steps;
    printf( "%d\n", steps );
}
/*
có nghĩa là bước đầu tiên và bước cuối cùng là đi 1, Từ điểm hiện tại tới điểm mới với bước đi không âm, độ dài bằng bước đi trước hoặc khác 1 đơn vị.
thằng tâm nó bảo là bài này đi tìm khoảng cách lớn nhất , kiẻu như *1+2+3+...)*2
*/
