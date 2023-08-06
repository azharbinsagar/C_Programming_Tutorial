//C Program to Find the area, perimeter of a rectangle in inches
#include <stdio.h> 
#include<conio.h>

 
int main() {
    //Declaring the Variables
    int width, height, area, perimeter; 
    
    printf("Enter the Height & Width:");
    scanf("%d%d",&height,&width);   //Input Numbers

    perimeter = 2*(height + width);
	printf("Perimeter of the rectangle = %d inches\n", perimeter);
	
	area = height * width;
	printf("Area of the rectangle = %d square inches\n", area);

return(0);
}