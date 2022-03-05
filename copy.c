#include<stdio.h>
#include<string.h>



int main (){
    char st1[50]="adesh",st2[50];
    int i=0;
    while((st1[i])!='\0'){
        st2[i]=st1[i]; 
        i++;
        }
        st2[i]='\0';


        printf("%s",st2);



return 0;
}