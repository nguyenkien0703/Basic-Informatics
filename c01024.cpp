/*


Input

Output

2

12451

1000012

YES

NO
*/


#include<stdio.h>
#include<math.h>


#define ll long long 


int main(){
	int t ;
	scanf("%d",&t);
	while(t--){
			int n ;
	scanf("%d",&n);
	int k =n;
	int r = k%10;
	while(k>=10){
		k/=10;
	}
	int ans =k;
	if(ans==r){
		printf("YES\n");
	}else printf("NO\n");		
	}

}