 #include<stdio.h>

struct student
{ int roll, marks[5]; };

int main()
{
    struct student x[10];
    int i,j;
    for(i=0;i<3;i++)
    {
        printf("\nEnter the Roll No:");
        scanf("%d",&x[i].roll);
        
        printf("Enter the Marks of Phy,Chem,Maths,CS,English:");
        for(j=0;j<5;j++)
           scanf("%d",&x[0].marks[j]);
         
    }
     
     for(i=0;i<3;i++)
      {  printf("\nMarks for Roll-%d are:\n",x[i].roll);
         for(j=0;j<5;j++)
         printf(" %d",x[i].marks[j]);
      }
    return 0;
}