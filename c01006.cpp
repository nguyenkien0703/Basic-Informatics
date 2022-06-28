/*
10 5
->
15 5 50 2.00 0
*/
#include <stdio.h>
#include<math.h>
//using namespace std;
#define ll long long 


int main ()
{
	int a , b;
	scanf("%d%d",&a,&b);
	if(b==0){
		printf("%d",0);
	}else{
		int tong=a+b;
		int hieu=a-b;
		int tich=a*b;
		float thuong=(float)a/b;
		int du=a%b;
		printf("%d %d %d %.2f %d",tong,hieu,tich,thuong,du);
	}
	
	return 0;
}