#include<stdio.h>
#include<string.h>

int main (){
    char str1[20]="adesh ";
    char str2[20]=" adesh";
    int i,f=0;
    for(int i=0;str1!='\0';i++){
        if(str1[i]!=str2[i]){
            f=1;
            break;
        }
    }
if(f==0) printf("same string");
else printf("not same");

return 0;
}





