//C Program to swap two numbers without using the third variable
#include<stdio.h>
int main()
{
	int x, y;
	printf("Input value for x & y: \n");
	scanf("%d%d",&x,&y);
	printf("Before Swapping\n");
	printf("x: %d & y: %d",x,y);
		x=x+y;
		y=x-y;
		x=x-y;
	printf("\nAfter Swapping\n");
	printf("x: %d & y: %d",x,y);
	return 0;
}