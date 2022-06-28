#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long
void them(char c[],int vitrithem,char kituthem){
    int n=strlen(c);
    for(int i=n-1;i>=vitrithem;i--){
        c[i+1]=c[i];
    }
    c[vitrithem]=kituthem;
    c[n+1]='\0';

}

int main(){
    int n ;

    while(1){
        scanf("%d",&n);
        if(n==0) break;
        char s1[100],s2[100],s[100];
        scanf("%s",s1);
        scanf("%s",s2);
        scanf("%s",s);
        int dem=0;
        int kt=1;
        while(1){
            if (kt==0) break;
			dem++;
			if (dem>50)
			{
				kt=0;
				break;
			}
            char ans[100]="";

            for(int i=0;i<n;i++) {
                them(ans,i,s2[i]);
                them(ans,i,s1[i]);
            }
            if(strcmp(ans,s)==0&&strlen(ans)==strlen(s)){
                kt =1;
                break;
            }else{
                for(int i=0;i<n;i++){
                    // strcpy(s1[i],ans[i]);
                    // strcpy(s2[i],ans[i+n]);
                    s1[i]=ans[i];
					s2[i]=ans[i+n];
                    
                }
            }
        }
        if(kt==0) printf("-1\n");
        else printf("%d\n",dem);;
    }
    return 0;
}


