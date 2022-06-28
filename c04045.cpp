
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

//Dãy ưu thế | Cách nhập mảng không biết trước số lượng phần tử.
#define ll long long 
int main(){
    int t ;
     scanf("%d",&t);

    while(t--) {
       ll n=0 ;//đếm số lượng phần tử trong mảng 
       ll c =0, l=0;
       char kitu = ' ';
       while(kitu == ' ') {
           ll x ;scanf("%lld",&x);
           ++n;//tăng cái biến đếm này lên để nhập số liền kề đằng sau 
           if(x%2 ==0) ++c;
           else ++l;
           kitu = getchar();//để nó đọc cái kí tự đăng sau xem là j , dấu cách thì tiếp tục vong lặp , dấu enter thì STOP

       }
       if((n%2 ==0 && c > l ) || ( n%2 ==1 && c<l)) {
           printf("YES");
          
       } else{
            printf("NO");

        }
        printf("\n");
    }
    return 0;
}
/*Dãy gọi là ưu thế chẵn nếu số phần tử của dãy là chẵn và số lượng số chẵn trong dãy
nhiều hơn số lượng số lẻ.
 Dãy gọi là ưu thế lẻ nếu số phần tử của dãy là lẻ và số lượng số lẻ trong dãy nhiều
hơn số lượng số chẵn.*/