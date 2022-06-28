/*
Xâu kí tự đầy đủ.
Một xâu kí tự được gọi là đầy đủ nếu xóa đi 0 hoặc 1 số kí tự trong xâu ta thu được xâu
abcdefghijklmnopqrstuvwxyz.
Tìm số lượng kí tự cần chèn vào xâu để tạo được xâu đầy đủ
Input:
Xâu duy nhất chỉ chứa chữ cái in thường có không quá 100 kí tự
Output:

21
Số lượng kí tự cần chèn vào xâu để được xâu đầy đủ
Input Output
abczzzzzzzx 22
zyx 25
*/
#include<math.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int lis(char c[]){
    int lis[strlen(c)];
    //lis[i]:chieu dai day con tang dai nhat ket thuc tai chi so i 
    for(int i=0;i<strlen(c);i++){
        lis[i]=1;
        for(int j=0;j<i;j++){
            if(c[i]>c[j]&&lis[i]<lis[j]+1){
                lis[i]=lis[j]+1;
            }
        }
    }
    int res=0;
    for(int i=0;i<strlen(c);i++){
        if(lis[i]>res){
            res=lis[i];
        }
    }
    return  26-res;
}


char c[1000];
int main(){
    scanf("%s",c);
    printf("%d",lis(c));
}