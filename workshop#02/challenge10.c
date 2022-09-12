#include <stdio.h>
#include <stdbool.h>

int divededby(int n,int a){
  int d;
  int s=0;
  d=n/a;
  return d;


}
void divdebey(int n , int a){
  bool x;
  int d=divededby(n,a);
  //printf("%d",d);
  if(d==1 || d==2){
    printf("Truezz");
  }else{
    for(int i=1;i<=d;i++){
    if(i!=1  && i!=d){
        if(d%2==0 || (d%3==0 && d!=3) || (d%5==0 && d!=5)){
            x=false;
            break;
        }else{
            x=true;
            break;
        }
      }
    }
  }
  printf(x ? "True" : "False");
}
int main(){
    int n,a;
    bool x;
    scanf("%d",&n);
    scanf("%d",&a);
    divdebey(n,a);
 return 0;
 }
