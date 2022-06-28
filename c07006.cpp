#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long

int main(){
    int t ;
    scanf("%d",&t);
    if(t<=10){

        double x1,y1,x2,y2,x3,y3;
        scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
        double A=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        double B=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
        double C=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
        if((A+C<=B)||(B+C<=A)||(C+B<=A)){
            printf("INVALID");
        }else{
        	double ans=(double)sqrt((A+C+B)*(A+B-C)*(B+C-A)*(C+A-B))/4;
            printf("%.2lf",(double)ans);
        }
        printf("\n");
        t--;
    }


}