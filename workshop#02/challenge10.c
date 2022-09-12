#include <stdio.h>
#include <stdbool.h>

void divededby(int *n,int *a){
  bool t=true, f=false;
  int s=0,d;
  d=*n/(*a);
  if(d==1 || d==2){
    printf("True");
  }else{
    for(int i=1;i<=d;i++){
    if(i!=1  && i!=d){
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
int main(){
    int n,a;
    scanf("%d",&n);
    scanf("%d",&a);
    divededby(&n,&a);


 return 0;
 }
