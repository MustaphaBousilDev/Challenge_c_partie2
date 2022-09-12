#include <stdio.h>

 void swaps(int *a,int *b){
      int c=*a;
      *a=*b;
      *b=c;

}
int main(){
   int a,b;
   printf("Enter number a:");
   scanf("%d",&a);
   printf("Enter number b:");
   scanf("%d",&b);
   swaps(&a,&b);
   printf("New value a = %d \n",a);
   printf("New value b = %d  \n",b);

   return 0;



   return 0;
}
