/*
PHÂN SỐ

Bài làm tốt nhất
Cho hai phân số p và q với tử số và mẫu số không quá 10000. Hãy viết chương trình thực hiện:

Rút gọn sau đó Quy đồng hai phân số
Tính tổng hai phân số và rút gọn
Tính thương hai phân số và rút gọn
Input: Dòng 1 ghi số bộ test. Mỗi bộ test ghi trên một dòng 4 số nguyên dương lần lượt là tử số của p, mẫu số của p, tử số của q, mẫu số của q. Mỗi số cách nhau 1 khoảng trống

Output: Dòng đầu ghi dòng chữ Case và thứ tự bộ test (theo mẫu trong ví dụ). Tiếp theo là 3 dòng:

Dòng 1 ghi 2 phân số sau khi quy đồng
Dòng 2 ghi phân số tổng
Dòng 3 ghi phân số thương
Ví dụ:

Input

Output

2

2 3 4 5

1 4 7 8

Case #1:

10/15 12/15

22/15

5/6

Case #2:

2/8 7/8

9/8

2/7
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int gcd(int a,int b){
    if(b==0)
    return a;

    return gcd(b,a%b);

}
int lcm(int a, int b){
    return a/gcd(a,b)*b;
}
struct ps{
    int tu , mau;
};
typedef struct ps ps;
ps rutgon(ps a){
    int ucln=gcd(a.tu,a.mau);
    a.tu/=ucln;
    a.mau/=ucln;
    return a;
}
void solve(ps a, ps b){
    a=rutgon(a);
    b=rutgon(b);
    int mc=lcm(a.mau,b.mau);
    a.tu=mc/a.mau*a.tu;
    b.tu=mc/b.mau*b.tu;
    a.mau=b.mau=mc;
    printf("%d/%d %d/%d\n",a.tu,a.mau,b.tu,b.mau);
    ps tong, thuong;
    tong.tu=a.tu+b.tu;
    tong.mau=mc;
    tong=rutgon(tong);
    printf("%d/%d\n",tong.tu,tong.mau);
    thuong.tu=a.tu*b.mau;
    thuong.mau=a.mau*b.tu;
    thuong=rutgon(thuong);
    printf("%d/%d\n",thuong.tu,thuong.mau);


}
int main(){
    int t;
    scanf("%d",&t);
    for(int z=1;z<=t;z++){
        ps a,b;
        scanf("%d%d%d%d",&a.tu,&a.mau,&b.tu,&b.mau);
        printf("Case #%d:\n",z);
        solve(a,b);
    }
}