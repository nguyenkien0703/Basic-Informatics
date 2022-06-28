
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long
#define ll long long 
// tăng dần thì lấy a - b 
int cmp1(const void *a, const void *b){
    return *(int*)a-*(int*)b;
}
//giảm dàn thì lấy b tru fdi a 
int cmp2(const void *a, const void *b){
    return *(int*)b-*(int*)a;
}

int main(){

    int t;
    scanf("%d",&t);
    for(int z=1;z<=t;z++){

        ll n;
        scanf("%lld",&n);
        ll a[n],b[n];
        for(ll i=0;i<n;i++){
            scanf("%lld",&a[i]);
        }
        for(ll i=0;i<n;i++){
            scanf("%lld",&b[i]);
        }
        qsort(a,n,sizeof(ll),cmp1);
        qsort(b,n,sizeof(ll),cmp2);
        printf("Test %d:\n",z);
        for(ll i=0;i<n;i++){
            printf("%lld %lld ",a[i],b[i]);
        }

       printf("\n");
    }
    

    



}