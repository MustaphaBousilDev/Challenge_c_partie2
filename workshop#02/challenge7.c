#include <stdio.h>


int add(int a , int b){

    return a + b;
}
int main(){
 int a,b;
 scanf("%d",&a);
 scanf("%d",&b);
 printf("%d",add(a,b));
 return 0;
}
