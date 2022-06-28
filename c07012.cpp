/*
SẮP XẾP DANH SÁCH MẶT HÀNG

Bài làm tốt nhất
Hãy sắp xếp danh sách các mặt hàng theo lợi nhuận giảm dần. Mỗi mặt hàng gồm các thông tin: Mã mặt hàng (là một số nguyên, tự động tăng, tính từ 1); Tên mặt hàng, nhóm hàng: là các xâu ký tự; Giá mua, giá bán: là các số thực (không quá 9 chữ số)

Input:

Dòng đầu chứa số mặt hàng. Mỗi mặt hàng viết trên 4 dòng: Dòng 1: Tên mặt hàng. Dòng 2: Nhóm hàng. Dòng 3: Giá mua. Dòng 4: Giá bán

Output: Ghi ra danh sách mặt hàng đã sắp xếp theo lợi nhuận giảm dần (lợi nhuận tính bằng giá bán trừ đi giá mua). Mỗi mặt hàng viết trên một dòng gồm: mã, tên, nhóm hàng và lợi nhuận. Các thông tin cách nhau đúng 1 khoảng trống. Lợi nhuận viết với 2 chữ  số sau dấu phẩy. 

Ví dụ:

Input

Output

3

May tinh SONY VAIO

Dien tu

16400

17699

Tu lanh Side by Side

Dien lanh

18300

25999

Banh Chocopie

Tieu dung

27.5
37

2 Tu lanh Side by Side Dien lanh 7699.00

1 May tinh SONY VAIO Dien tu 1299.00

3 Banh Chocopie Tieu dung 9.50



*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
struct mh{
    int id;
    char ten[100];
    char ma[100];
    float mua,ban ;

};
typedef struct mh mh;
void sx(mh a[], int n){
    for(int i = 0; i < n; i++){
        int max =i;
        for(int j=i+1; j < n; j++){
            if((a[j].ban-a[j].mua)>(a[max].ban-a[max].mua)){
                max = j;
            }
        }
        mh tmp=a[max];
        a[max]=a[i];
        a[i]=tmp;
    }
}



int main(){
    int n ;
    scanf("%d",&n);
    mh a[n];
    for(int i=0;i<n;i++){
        a[i].id=i+1;
        getchar();
        gets(a[i].ten);
        gets(a[i].ma);
        scanf("%f%f",&a[i].mua,&a[i].ban);

    }
    sx(a,n);
    for(int i = 0; i < n; i++){
        printf("%d %s %s %.2f\n",a[i].id,a[i].ten,a[i].ma,a[i].ban-a[i].mua);
    }

}