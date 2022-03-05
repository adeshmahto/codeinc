#include<stdio.h>

int main(){
    char s1[]="ade";
    char s2[]="s";
    int i,j;
    i=j=0;
    while(s1[i]!='\0'){
        i++;
    }
    while((s1[i++]=s2[j++])!='\0'){
      
    }
   
    printf("%s",s1);
 

   
    return 0;
}
