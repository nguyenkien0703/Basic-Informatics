/*
Tam giác vuông
Theo định lý Pytago, ta đã biết một bộ 3 số (a, b, c) thỏa mãn a

2 + b2 = c2

thì đó là ba cạnh

của một tam giác vuông.
Cho dãy số A[] gồm có N phần tử. Nhiệm vụ của bạn là kiểm tra xem có tồn tại bộ ba số
thỏa mãn là ba cạnh của tam giác vuông hay không.
Dữ liệu vào:
 Dòng đầu tiên là số lượng bộ test T (T ≤ 20).
 Mỗi test gồm số nguyên N (1≤ N ≤5000).
 Dòng tiếp theo gồm N số nguyên A[i] (1 ≤ A[i] ≤ 109
).

Kết quả:

Với mỗi test, in ra trên một dòng “YES” nếu tìm được, và “NO” trong trường hợp ngược
lại.
Input Output
2
5
3 1 4 6 5
3
1 1 1

YES
NO
*/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define ll long long ///luwu ở andrew rồi , list phát
void sort(ll a[], int n) {
    for(int i=0;i<n-1;i++){
        int min_pos=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min_pos]) min_pos=j;
        }
        ll  tmp=a[min_pos];
        a[min_pos]=a[i];
        a[i]=tmp;
    }
}
int check(ll a[], int n){
    for(int i=n-1;i>=2;i--){
        int l=0,r=i-1;
        while(l<r){
            if(a[l]+a[r]==a[i]) return 1;
            else if(a[l]+a[r]<a[i]) ++l;
            else --r;
        }
    }
    return 0;
}
int main(){
    int t ;
    scanf("%d",&t);
    while(t--){
        int n ;
        scanf("%d",&n);
        ll a[n];
        for(int i=0;i<n;i++){
            int x;
            scanf("%d",&x);
            a[i]=1ll*x*x;
        }
        sort(a,n);
        if(check(a,n)) printf("YES");
        else printf("NO");
        printf("\n");




    }






}