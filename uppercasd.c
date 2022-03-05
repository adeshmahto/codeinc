#include<stdio.h>
#include<string.h>

int  main(){
    // char str[40];
    // int i;
    // printf("enter the string");
    // gets(str);
    // for(i=0;str[i]!='\0';i++){
    //     if(str[i]>='a' && str[i]<='z'){
    //         str[i]=str[i]-32;
    //     }
    // }
    // printf("uppercase string %s",str);
    //strup(str);

    // lowercacse
 
    // char str[40];
    // int i;
    //  printf("enter the string");
    //  gets(str);
    //  for(i=0;str[i]!='\0';i++){
    //      if(str[i]>='A' && str[i]<='Z'){
    //          str[i]=str[i]+32;
    //      }
    //  }
    //   printf("Lowercase string %s",str);

      // strlwr(str);

      // Reverse string;
    // char str[40], rev[40];
    // int i,j,k=0;
    // printf("enter the string");
    // gets(str);

    // for(i=0;str[i]!='\0';i++){
        
    //     for(j=i-1;j>=0;j--){
    //         rev[k]=str[j];
    //         k++;
    //     }

 
    // }

    // for(int i=0;i<strlen(str);i++){
    //     printf("%s",rev[i]);
    // }


    // strrev(str) // funtion reverse;


    //palindrome

    char str[40];
    int i,j,k=0;
    printf("enter the string");
    gets(str);
    char temp=str;
    for( i=0,j=strlen(str)-1;i<j;i++,j--){
        str[i]=str[i]^str[j];
        str[j]=str[i]^str[j];
         str[i]=str[i]^str[j];
    }
   if(temp==str) printf("palindrome");
   else printf("not palindrome");

  return 0;




}