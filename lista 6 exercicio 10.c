#include<stdio.h>
#include <string.h>
int main (){
char s[40];
char nova[40];
int i,x=0;
    printf("palavra:");
    scanf("%s",s);
        for(i=0;s[i];i++){
            if(toupper(s[i])=='A' || toupper(s[i])=='E' || toupper(s[i])=='I' || toupper(s[i])=='O' || toupper(s[i])=='U'){
            nova[x]=s[i];
            x++;
            }
        }
    nova[x]='\0';
    puts(nova);

return 0;
}
