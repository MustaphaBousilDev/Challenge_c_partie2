#include <stdio.h>
#include <string.h>

int main(){
 int a,b,r;
 printf("Enter Two Numbers: \n");
 scanf("%d %d",&a , &b);
 if(a==b){
    r=(a+b)*3;
    printf("%d",r);
 }else{
    r=a+b;
    printf("%d",r);
 }
 return 0;
}
