//C Program to Find the Sum and Average of Three Numbers (Simple Way)

#include<stdio.h>
int main()
{
  //Declaring Three Variables
  
   int x, y, z, sum;           
   float avg;

   printf("Enter Three Numbers : \n");    
   scanf("%d %d %d",&x, &y, &z);     //Input Numbers

  //Calculating Sum of three numbers

   sum = x + y +z;
   printf("Sum of Three Numebers is : %d", sum);    

  //Calculating Average of three numbers

   avg=sum/3;                  
   printf("\n Average of Three Numebers is : %f", avg);    

   return 0;
}