#include<stdio.h>
#include <ctype.h>
int main (){
int i;
char s[47];
    printf("Informe uma palavra:");
    scanf("%s",s);
    for(i=0;s[i];i++){
        if(toupper(s[i])!='A'&& toupper(s[i])!='E'&& toupper(s[i])!='I'&& toupper(s[i])!='O'&& toupper(s[i])!='U'){
            s[i]='*';
        }
    }
 printf("A palavra alterada, sem suas consoantes fica:");
 for(i=0;s[i];i++){
  printf("%c",s[i]);
 }
return 0;
}
