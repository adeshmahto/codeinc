#include<stdio.h>
#include<string.h>


int main(){
char text1[45],text2[50];
int i;
printf("enter string:");
gets(text1);
for(i=0;text1[i]!='\0';i++){
    text2[i]=text1[i];
}
text2[i]='\0';
printf(" first string %s\n",text1);
printf(" second string %s\n",text2);
printf(" total character string %d\n",i);


printf("%s",strcpy(text2,text1));



return 0;
 }


