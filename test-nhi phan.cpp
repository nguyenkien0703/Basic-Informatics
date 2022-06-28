/*
Chuyển sang số nhị phân

Bài làm tốt nhất
Nhập vào số nguyên dương a có không quá 3 chữ số. Hãy in biểu diễn dưới dạng nhị phân của số a.

*/




#include<math.h>
#include<stdio.h>
#include<string.h>
int  mu(int a ,int b){
    int ans =1;
    for(int i=1;i<=b;i++){
        ans*=a;
    }
    return ans;
}

int solve(int n ){
    int res=0;
    int p=0;
    while(n>0){
        res+=(n%2)*mu(10,p);
    	++p;
        n/=2;
    }
    return res;
}


int main(){
	int n ;
	scanf("%d",&n);
	if(n==0){
		printf("%d\n",0);
	}else 
	printf("%d\n",solve(n));
}