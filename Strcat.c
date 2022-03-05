#include<stdio.h>
#include<string.h>

int main(){
    char str1[20],str2[30];
    int i,j;
    printf(" enter first string:");
    gets(str1);
    printf("enter second string:");
    gets(str2);
    i=0;
    while(str1[i!='\0']){
        i++;

    }
    j=0;
    while(str2[j]!='\0'){
        str1[i]=str2[j];
        i++;
        j++;

    }
    str1[i]='\0';
    printf("concatenated string=%s",str1);

   // strcat(str1,str2);
    return 0;
}