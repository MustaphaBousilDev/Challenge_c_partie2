#include <stdio.h>
#include <string.h>
int main(){
  char a[10]={};
  char b[10]={};
  int count=0;
  int n;
  printf("Enter Number Character in table:");
  scanf("%d",&n);

  for(int i=0;i<n;i++){
    scanf("%s",&a[i]);
    }
  for(int i=0;i<n;i++){
    scanf("%s",&b[i]);
    }

  if(strlen(a)==strlen(b)){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
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

  if(count==n){
    printf("Yess Bitchh");
  }else{
    printf("Noo Bitchhh");
  }


  return 0;
}
