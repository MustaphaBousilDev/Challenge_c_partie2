#include <stdio.h>
#include <stdbool.h>

int div(int n,int a){
   int d;
   d=n/a;
   return d;
}

void result(int n,int a){
  bool x=true;
  int d=div(n,a);
  printf("%d",d);
  if(d==1){
    x=false;
   }else{
    for(int i=2;i<=d/2;i++){
        if(d%i==0){
            x=false;
            break;
        }
    }
  }
  printf(x ? "True" : "False");
}

int main(){
  int n,a;


  scanf("%d",&n);
  scanf("%d",&a);



  result(n,a);
  return 0;

}
