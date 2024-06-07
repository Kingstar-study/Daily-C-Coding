#include<stdio.h>
int main()
{
	float height, width;
	printf("Enter height and width: ");
	scanf("%f %f", &height, &width);
	
	float area_of_rectangle = height* width;
	float area_of_triangle = height* width*0.5;
	
	printf("Area of rectangle is : %f\n",area_of_rectangle);
	printf("Area of triangle is : %f",area_of_triangle);
	return 0;
}