#include <stdio.h>
#include <string.h>
int main(){

 int n,x,y,t;
 //scanf("%d",&n);
 for(int i=1;i<=5;i++){
    printf("\n");
    for(int j=1;j<=5;j++){
       scanf("%d",&t);
       if(t==1){
        x=i;
        y=j;
       }
    }
    if(x>=3){x=x-3;}
       else{x=3-x;}
       if(y>=3){y=y-3;}
       else{y=3-y;}
 }
 printf("%d",x+y);
 return 0;
}
