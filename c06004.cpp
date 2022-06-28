/*
#include <stdio.h>
#include <stdlib.h>

struct SinhVien{
	int ma;
	char ten[100];
	float a, b, c;
};
typedef struct SinhVien SV;

int cmp(const void *a, const void *b){
	SV* x = (SV*)a;
	SV* y = (SV*)b;
	if(x->a + x->b + x->c < y->a + y->b + y->c) return -1;
	else return 1;
}

int main(){
	SV a[1000];
	int lc, n;
	while(1){
		scanf("%d", &lc);
		if(lc == 1){
			scanf("%d", &n);
			for(int i = 0; i < n; i++){
				getchar();
				gets(a[i].ten);
				scanf("%f%f%f", &a[i].a, &a[i].b, &a[i].c);
				a[i].ma = i + 1;
			}
			printf("%d\n", n);
		}
		else if(lc == 2){
			int id; scanf("%d", &id);
			getchar();
			gets(a[id-1].ten);
			scanf("%f%f%f", &a[id-1].a, &a[id-1].b, &a[id-1].c);
			printf("%d\n", id);
		}
		else{
//			qsort(a, n, sizeof(SV), cmp);
//			for(int i = 0; i < n; i++){
//				printf("%d %s %.1f %.1f %.1f\n", a[i].ma, a[i].ten, a[i].a, a[i].b, a[i].c);
//			}
			for(int i = 0; i < n; i++){
				if(a[i].a < a[i].b && a[i].b < a[i].c)
					printf("%d %s %.1f %.1f %.1f\n", a[i].ma, a[i].ten, a[i].a, a[i].b, a[i].c);
			}
			break;
		}
	}
}

*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

typedef long long ll;
typedef unsigned long long ull;

#define X first

#define Y second

#define pb push_back
#define mp make_pair
#define ep emplace_back
#define EL printf("\n")
#define sz(A) (int)A.size()
#define FOR(i, a, b) for (ll i = a; i <= b; i++)
#define FOD(i, r, l) for (ll i = r; i >= l; i--)
#define fillchar(a, x) memset(a, x, sizeof(a)




int main()
{   

    char c[100];
    gets(c);
    int c1=0,c2=0;
    for(int i=0;i<strlen(c);i++){
        if(isdigit(c[i])) ++c1;
        else if(isalpha(c[i])) ++c2;
    }
    printf("%d %d %d",c2,c1,strlen(c)-c1-c2);



}
