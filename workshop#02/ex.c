#include <stdio.h>
#include <stdbool.h>

int main(){
 bool t=true, f=false;
 int n,a,d;
 int s=0;

 scanf("%d",&n);
 scanf("%d",&a);
 d=n/a;
 if(d==1 || d==2){
    printf("True");
 }else{
    for(int i=1;i<=d;i++){
    if(d!=1  && d!=n){
        if(d%2==0 || (d%3==0 && d!=3) || (d%5==0 && d!=5)){
            printf("False");
            break;
        }else{
            printf("True");
            break;
        }
      }
    }
 }




}
