#include <stdio.h>
#include <stdbool.h>
bool isPremier(int *n){
   bool a=true, b=false;
   int s=0;
   for(int i=1;i<=*n;i++){
      if(i!=1 && i!=*n){
         //if not prime
         if(*n%2==0 || (*n%3==0 && *n!=3) || (*n%5==0 && *n!=5)){
            s++;
         }
      }
   }
   if(s==0){
     printf("%d \n",a);
   }else{
     printf("%d  \n",b);
   }

   return a,b;
}


int main(){
  int n;
  scanf("%d",&n);
  isPremier(&n);

  return 0;

}
