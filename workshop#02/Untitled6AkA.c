#include <stdio.h>
#include <string.h>
int main(){

  char a[100];
  char b[100];
  int count=0;
  int n;

  scanf("%[^\n]%*c",a);
  scanf("%[^\n]%*c",b);
  if(strlen(a)==strlen(b)){
    for(int i=0;i<strlen(a);i++){
         for(int j=0;j<strlen(a);j++){
            if(b[j]=='*'){
                continue;
            }else{
                if(a[i]==b[j]){
                   count++;
                   b[j]='*';
                }
            }
          }
     }
  }

  if(count==strlen(a)){
    printf("Yess Bitchh");
  }else{
    printf("Noo Bitchhh");
  }


  return 0;
}
