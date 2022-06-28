#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
struct number{
	int val;
	int fre;
};
typedef struct number number;
int check(int n){
	while(n>=10){
		int r=n%10;
		if(r<(n/10)%10) return 0;
		n/=10;
	}
	return 1;

}

int find(number a[], int n, int x){
	for(int i=0;i<n;i++){
		if(a[i].val==x)
		return i;
	}
	return -1;
}
int cmp(const void *a, const void *b){
	number *x=(number*)a;
	number *y=(number*)b;
	return y->fre - x->fre;
}
int main(){
	number a[100001];
	int n=0;
	int x;
	while((scanf("%d",&x))!=-1){
		if(check(x)){
			int idx=find(a,n,x);
			if(idx!=-1){
				a[idx].fre+=1;
			}else{
				a[n].val=x;
				a[n].fre=1;
				++n;
			}
		}
	
	}
	qsort(a,n,sizeof(number),cmp);
	for(int i=0;i<n;i++){
		printf("%d %d\n",a[i].val,a[i].fre);
	}
}