#include<stdio.h>
#include<math.h>
#define ll long long 

int main(){


    ll n;
    scanf("%lld",&n);
    ll a[n];
    for(ll i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    ll max1=-1e9,max2=-1e9;
    for(ll i=0;i<n;i++){
        if(a[i]>max1){
            max2=max1;
            max1=a[i];
        }else if(a[i]>max2&&a[i]!=max1){
            max2=a[i];
        }
    }
    printf("%lld %lld\n",max1,max2);
    

    



}