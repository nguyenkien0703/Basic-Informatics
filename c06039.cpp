#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int count(char a[], char b[], int n){
	if(strcmp(a, b) == 0) return 0;
	for(int i = 0; i < n; i++){
		char tmp = b[0];
		for(int j = 0; j < n - 1; j++) b[j] = b[j + 1];
		b[n - 1] = tmp;
		//printf("%s %s\n", a, b);
		if(strcmp(a, b) == 0) return i + 1;
	}
	return - 1;
}

void solve(){
	int n;
	scanf("%d", &n);
	char a[100][100];
	for(int i = 0; i < n; i++){
		scanf("%s", a[i]);
	}
	char des[100];
	strcpy(des, a[0]);
	int res = 1e9, len = strlen(a[0]);
	for(int i = 0; i < len; i++){
		//rotate des
		int cnt = 0;
		for(int j = 0; j < n; j++){
			char x[100]; strcpy(x, a[j]);
			int ans = count(des, x, len);
			if(ans == -1){
				printf("-1\n"); return;
			}
			cnt += ans;
		}
		if(res > cnt){
			res = cnt;
			//printf("%s\n", des);
		}
		char tmp = des[len - 1];
		for(int j = len - 1; j > 0; j--) des[j] = des[j - 1];
		des[0] = tmp;
	}
	printf("%d\n", res);
}


int main(){
	solve();
}