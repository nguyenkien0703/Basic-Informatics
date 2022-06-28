#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define ll long long

int main(){
    int t ;
    scanf("%d",&t);
    while(t--){
         double x1,y1,x2,y2,x3,y3;
        scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
        double AB=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        double AC=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
        double BC=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
        if((AB+AC<=BC)||(AB+BC<=AC)||(AC+BC<=AB)){
            printf("INVALID");
        }else{
            printf("%.3lf",AB+AC+BC);
        }
        printf("\n");
      



        
    }
    
}
