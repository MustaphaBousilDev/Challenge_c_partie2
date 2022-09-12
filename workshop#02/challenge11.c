#include <stdio.h>
#include <stdbool.h>

void  is_leap_year(int year){
   bool x;
   if((year % 4 ==0 && year % 100 !=0) || year %400==0){
       x=true;
   }else{
       x=false;
   }
   printf(x ? "True" : "False");
}

int main(){
 int year;
 printf("Enter Year:");
 scanf("%d",&year);
 is_leap_year(year);
 return 0;
}
