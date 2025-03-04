#include <stdio.h>
#include <stdlib.h>
//Question 1 finding average.
int main()
{
   int m,c,p;
   float avg1,avg2,avg3,avg4,Total_Average;
   //ASSIGNMENTS
   printf("Enter your score in percentage for Assignments. \nMATHS:");
   scanf("%d",&m);
   printf("PHYSICS:");
   scanf("%d",&p);
   printf("CHEMISTRY:");
   scanf("%d",&c);
   avg1=(float)m + (float)c + (float)p;
   avg1= avg1/3;
   printf("Average for Assignments is %.1f",avg1);

   //COURSEWORK
    printf("\nEnter your score in percentage for Coursework. \nMATHS:");
   scanf("%d",&m);
   printf("PHYSICS:");
   scanf("%d",&p);
   printf("CHEMISTRY:");
   scanf("%d",&c);
   avg2=(float)m + (float)c + (float)p;
   avg2= avg2/3;
   printf("Average for Coursework is %.1f",avg2);

   //MIDTERM
      printf("\nEnter your score in percentage for Midterm. \nMATHS:");
   scanf("%d",&m);
   printf("PHYSICS:");
   scanf("%d",&p);
   printf("CHEMISTRY:");
   scanf("%d",&c);
   avg3=(float)m + (float)c + (float)p;
   avg3= avg3/3;
   printf("Average for Midterm is %.1f",avg3);

   //ENDOFTERM
      printf("\nEnter your score in percentage for End Of Term. \nMATHS:");
   scanf("%d",&m);
   printf("PHYSICS:");
   scanf("%d",&p);
   printf("CHEMISTRY:");
   scanf("%d",&c);
   avg4=(float)m + (float)c + (float)p;
   avg4= avg4/3;
   printf("Average for End Of Term is %.1f",avg4);

   Total_Average=(avg1 + avg2 + avg3 +avg4)/4;
   printf("\nYour Total Average is %.1f",Total_Average);
    return 0;
}
