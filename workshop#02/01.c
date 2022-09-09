#include <stdio.h>
#include <string.h>

int main(){
 int n;
 printf("Enter Number :");
 scanf("%d",&n);
 if(n%2==0){
    printf("Number %d Pair",n);
 }else{
    printf("Number %d Impaire",n);
 }
 return 0;
}
