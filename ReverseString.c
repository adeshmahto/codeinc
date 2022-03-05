#include<stdio.h>
#include<string.h>
//void rev(char);
//void itoa(int ,char);

int main (){

    char st[45]="aditi";
    itoa(st);
    return 0;
}
void rev(char st[45]){
    int c;
    int i,j;
    
    for( i=0, j=strlen(st)-1; i<j; i++,j--){
        c=st[i];
        st[i]=st[j];
        st[j]=c;
    }
 
    
}
void itoa(int n,char st[45]){
int i,sign;
if((sign=n)<0)
n=-n;
i=0;
do{
    st[i++] =n%10+'0';
}while((n/=10)>0);
if(sign<0)
st[i++]='-';
st[i]='\0';
rev(st);
  printf("%s",st);
}