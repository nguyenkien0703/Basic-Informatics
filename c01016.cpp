/*
5 -> 5 10 15 20 25 30 35 40 45 50 
*/
#include <stdio.h>
#include<math.h>
//using namespace std;
#define ll long long 
#define foru(i,a,b) for(int i=a;i<=b;++i)

int main ()
{
	int n;
	scanf("%d",&n);
	foru(i,1,10){
		printf("%d ",n*i);
	}
	return 0;
}
 
