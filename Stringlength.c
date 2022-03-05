   
int main(){

     char text[10]  ;
    int i,count=0;   
      printf("Enter the string:");  
         gets(text);
    for (i=0;text[i]!='\0';i++){
         count++;   
           }
     printf("%d\n",count);
  //  int length=strlen(text);
  //     printf("%d\n",length);


    return 0;
}