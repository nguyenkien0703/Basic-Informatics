#include <stdio.h>
#include <math.h>
#define ll long long
int stn(long long a)
{
   ll rev=0,tmp=a;
   while(a>0) {
       rev=rev*10+a%10;
       a/=10;
   }
   return rev==tmp;
}
int kt(long long a)
{
   while(a>0) {
       ll r=a%10;
       a/=10;
       if(r==6){
           return 1 ;
           break;
       }
   }
   return 0 ;
}
ll tong(long long a)
{
    ll sum=0;
    while(a>0) {
        sum+=a%10;a/=10;
    }
    ll r=sum%10;
    if(r==8){
        return 1 ;
    }else return 0;
}
int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);
    if (a > b)
    {
        long long c = a;
        a = b;
        b = c;
    }
    for (long long i = a; i <= b; i++)
    {
        if (stn(i) == 1 && kt(i) == 1 && tong(i) == 1)
        {
            printf("%lld ", i);
        }
    }
}