#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long
char*  sang6(char c[]){
    for(ll i=0;i<strlen(c);i++){
        if(c[i]=='5'){
            c[i] = '6';
        }
    }
    return c;
    
}
char* sang5(char c[]){
    for(ll i=0;i<strlen(c);i++){
        if(c[i]=='6'){
            c[i] = '5';
        }
    }
    return c;
}

int main(){
	int t ;
    scanf("%d",&t);
    getchar();
    while(t--){
        char c[100] ,d[100];;
        scanf("%s",&c);
        scanf("%s",&d);

        ll lonnhat=atoll(sang6(c))+atoll(sang6(d));
        ll nhonhat=atoll(sang5(c))+atoll(sang5(d));
        printf("%lld %lld",nhonhat,lonnhat);
        printf("\n");
    }


    return 0;
}