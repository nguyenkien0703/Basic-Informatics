/*

1234->4231


*/


#include<stdio.h> 
int pow(int x, int y){
	int i=1;
	int kq=1;
	while(i<=y){
		kq=kq*x; i++; 
		}
		return kq; 
	}
int sochuso(int a){ 
	int i=0; 
	while(a>0){ 
		i++; 
		a/=10; 
	} 
	return i; 
} 
int main(){ 
	int n; 
	scanf("%d", &n); 
	int sodau; 
	int socuoi; 
	int than; 
	socuoi=n%10; 
	if(socuoi!=0){ 
		printf("%d",socuoi); 
	} 
	sodau=n/pow(10,sochuso(n)-1); 
	than=(n/10)%pow(10,sochuso(n)-2); 
	printf("%d",than); 
	printf("%d",sodau); 
}
