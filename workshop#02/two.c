#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
  char character_sasi[6]={'A','O','I','U','E','Y'};
  int counters;
  //printf("%c",character_sasi[0]);
  char letters[20];
  scanf("%s",letters);
  //printf("%c",letters[0]);
  //printf("%d",strlen(letters));
  for(int i=0;i<strlen(letters);i++){
    for(int j=0;j<6;j++){
        letters[i]=toupper(letters[i]);
        if(letters[i]==character_sasi[j]){
            counters++;
            printf("find character_sasi: %c \n",letters[i]);
            break;
        }
    }
  }
  if(counters ==0){
     printf("Not Exists ANY character entered ");
  }


  return 0;

}
