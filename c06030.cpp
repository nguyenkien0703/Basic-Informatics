#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

struct word{
	char val[100];
	int fre;
};

typedef struct word w;

w a[1000];
int n = 0;

int find(char c[]){
	for(int i = 0; i < n; i++){
		if(strcmp(c, a[i].val) == 0) return i;
	}
	return -1;
}

int main(){
	char x[100];
	int max_len = 0;
	while(scanf("%s", x) != -1){
		int pos = find(x);
		max_len = fmax(max_len, (int)strlen(x));
		if(pos == -1){
			strcpy(a[n].val, x);
			a[n].fre = 1;
			++n;
		}
		else{
			a[pos].fre++;
		}
	}
	for(int i = 0; i < n; i++){
		if(strlen(a[i].val) == max_len){
			printf("%s %d %d\n", a[i].val, max_len, a[i].fre);
		}
	}
}