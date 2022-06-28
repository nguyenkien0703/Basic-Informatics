#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define ll long long 

 
int main ()
{
	int n;
	scanf("%d", &n);
	int MinUp=50005;
	int MinDown=50005;
	int SumU=0;
	int SumD=0;
	for (int i=1; i<=n; i++)
	{
		int a, b;
		scanf("%d%d",&a,&b);
		SumU+=a;
		SumD+=b;
		if (a<MinUp) MinUp=a;
		if (b<MinDown) MinDown=b;
	}
	SumU+=MinDown;
	SumD+=MinUp;
	if (SumU<SumD) printf("%d",SumD);
	else printf("%d",SumU);
	return 0;
}