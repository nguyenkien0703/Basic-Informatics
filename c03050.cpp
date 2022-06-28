#include<stdio.h>
//đếm ở cả hai cột , nếu ptu nào xuất hiện (n-1) lần thì ac
int count[1000000] = {0};
int main(){
	int n;
	scanf("%d", &n);
	int m = n;
	int a,b;
	while(n > 1){
		scanf("%d%d", &a, &b);
		count[a]++;
		count[b]++;
		n--;
	}
	
	int i;
	for(i = 1; i <= m; i++){
		if(count[i] == (m - 1)){
			printf("Yes");
			return 0;
		}
	}
	printf("No");
	return 0;
}