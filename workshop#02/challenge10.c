#include <stdio.h>
#include <stdbool.h>

int divededby(int *n,int *a,int *d){
  bool t=true, f=false;
  int s=0;
  *d=*n/(*a);
  return *d;


}
void divdebey(int *n , int *a){
  bool t=true, f=false;

  int d=divededby(&n,&a,&d);

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
    bool x;
    scanf("%d",&n);
    scanf("%d",&a);
    divdebey(&n,&a);



 return 0;
 }
