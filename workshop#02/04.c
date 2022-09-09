#include <stdio.h>
#include <string.h>

int main(){
  float Month,Day,h,m;
  float s;
  float n;
  printf("Enter Year::");
  scanf("%f",&n);
  int   n1=(int)n;
  float n2=n - (int)n1;
  Month=n*12 ;//39.840000
  //printf("%f",Month);
  Day=(Month - (int)Month)*30;//25.200005
  //printf("%f",Day);
  h=(Day - (int)Day)*24;//4.800110
  //printf("%f",h);
  m=(h - (int)h)*60;//48.006592
  //printf("%f",m);
  s=(m - (int)m)*60;
  if(Month > 0){
    printf("Month : %d \n",(int)Month);
  }
  if(Day > 0){
    printf("Day : %d \n",(int)Day);
  }
  if(h){
    printf("Heurs : %d \n",(int)h);
  }
  if(m > 1){
    printf("Minutes : %d \n",(int)m);
  }
  if(s >= 1){
    printf("Seconds : %d",(int)s);
  }







  return 0;
}
