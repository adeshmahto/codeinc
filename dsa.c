#include<stdio.h>
#include<stdlib.h>
struct myArray{
 int total_size;
 int used_size;
 int *ptr;
};
void createArray(struct myArray *a,int tSize,int uSize){
//(*a).ptr = (int *) malloc(tSize sizeof(int ));
a->total_size=tSize;
a->used_size=uSize;
a->ptr=(int *) malloc(tSize*sizeof(int ));



}
 
 void show(struct myArray *a)
{
    for(int i = 0; i<a->used_size;i++){
        printf("%d\n", (a->ptr)[i]);

    }
}
 void setval(struct myArray *a)
{ int n;
    for(int i = 0; i<a->used_size;i++){
        printf("enter the element %d:",i);
        scanf("%d", &n);
        (a->ptr)[i]=n;

    }
}

int main(){
 struct myArray marks;
 createArray(&marks,10,2);
 printf("we are set val\n");
 setval(&marks);
 printf("we are showing\n ");
 show(&marks);
 



    return 0;
}