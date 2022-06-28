/*
2

1

23
->
1.000000000000000

0.043478260869565
*/
#include <stdio.h>
#include<math.h>
// using namespace std;
#define ll long long 


int main ()
{
	int t ;scanf("%d",&t);
	while(t--){
		int  n;
		scanf("%d",&n);
		double ans =1.0/n;
		printf("%.15lf\n",ans);	
	}
	
	
	return 0;
}