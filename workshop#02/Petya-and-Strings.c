#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
 char Alpha[30]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
 char input_1[20];
 int one=0,two=0;
 int zero;
 char input_2[20];
 scanf("%s",input_1);
 scanf("%s",input_2);
 for(int i=0;i<strlen(input_1);i++){
    if(strlen(input_1)==strlen(input_2)){
        tolower(input_1);
        tolower(input_2);
        if(input_1[i]==input_2[i]){
            if(i==(strlen(input_1) - 1)){
                zero=0;
                break;
            }else{continue;}
        }else{
           for(int j=0;j<strlen(Alpha);j++){
              if(input_1[i]==Alpha[j]){
                  one=j;
              }
              if(input_2[i]==Alpha[j]){
                  two=j;
              }
           }
        }
    }
 }
 if(one > two){printf("1");}
 else if(one < two){printf("-1");}
 else{printf("%d",zero);}

}
