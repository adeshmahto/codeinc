#include<stdio.h>
int main (){
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);

    if(ch== 97 || ch== 101 || ch ==105 || ch == 111 || ch==117  || ch==65 || ch== 69 || ch == 73 || ch==79 || ch==85 ){
        printf("%c It is vowel",ch);
    }else{
        printf("%c It is consonent");
    }





    return 0;
}