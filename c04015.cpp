/*
đếm các số nguyên tố trong dãy 
Cho dãy số A có n phần tử chỉ bao gồm các số nguyên dương (không quá 105). Hãy xác định các số nguyên tố trong dãy và đếm xem mỗi số xuất hiện bao nhiêu lần.      

Input: Dòng đầu tiên ghi số bộ test. Với mỗi bộ test: dòng đầu ghi số n (không quá 100); dòng tiếp theo ghi n số của dãy.

Output: Với mỗi bộ test ghi ra thứ tự bộ test, sau đó lần lượt là các số nguyên tố trong dãy theo thứ tự từ nhỏ đến lớn và số lần xuất hiện của nó.    
*/

#include<stdio.h>
#include<math.h>
#define ll long long 
ll cnt[100001]={0};

int main(){
    int t ;
    scanf("%d",&t);
    for(int i=1;i<=t;i++) {

        printf("Test %d:\n",i);
        ll n;
        scanf("%lld",&n);
        ll a[n];
        for(ll j=0;j<n;j++){
            scanf("%lld",&a[j]);
        }
        for(ll j=0;j<n;j++){
            cnt[a[j]]++;
        }
        for(ll j=0;j<n;j++){
            if(cnt[a[j]]!=0){
                printf("%lld xuat hien %lld lan\n",a[j],cnt[a[j]]);
                cnt[a[j]]=0;
            }        
        }

    }



}
