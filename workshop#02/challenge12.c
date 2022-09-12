
#include <stdio.h>
#include <string.h>

void copy(char p[20],char p2[20] ){
  for(int i=0;i<strlen(p);i++){
    p2[i]=p[i];
  }
  for(int i=0;i<strlen(p2);i++){
    printf("%c \n",p2[i]);
  }

}

int main() {
  char *p[20];
  char *p2[20];
  scanf("%s",&p);
  //printf("%s",p);
  //printf("%zu",strlen(p));
  copy(p,p2);



}
