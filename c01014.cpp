/*
2 -1 ->0.50

0 1->Vo nghiem

0 0->Vo so nghiem
*/

#include <stdio.h>
#include<math.h>
//using namespace std;
#define ll long long 


int main ()
{
	float  a,b;
	scanf("%f%f",&a,&b);
	if(a==0&&b==0){
		printf("Vo so nghiem");
	}else if(a==0&&b!=0){
		printf("Vo nghiem");
	}else if(a!=0&& b!=0){
		float ans =-b/a;
		printf("%.2f",ans);
	}
	
	return 0;
}

