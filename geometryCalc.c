#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265358979323846

int circleArea();
int rectangleArea();
int triangleArea();

int main()
{
	int decision = 1;

    do
    {
    	printf("Geometry Calculator\n");
        printf("\t1. Calculate the Area of a Circle\n");
    	printf("\t2. Calculate the Area of a Rectangle\n");
    	printf("\t3. Calculate the Area of a Triangle\n");
    	printf("\t4. Quit");

    	scanf("%d",&decision);

    	if(decision == 1)
    	{
    		circleArea();
    	}

    	else if(decision == 2)
    	{
    		rectangleArea();
    	}

    	else if(decision == 3)
    	{
    		triangleArea();
    	}

    	else if(decision == 4)
    	{
    		printf("Program terminated");
    		exit(0);
    	}

    	else
    	{
    		printf("Invalid input.");
    	}
    }while (decision >= 1 && decision <= 4);
}

int circleArea()
{
	double radius = 1;

   	do
   	{
   		double area1 = radius * PI;

   		printf("Enter the radius of the circle: ");
   		scanf("%lf", &radius);

   		if (radius >= 0)
   		{
   			printf("The area of the circle is %.3lf.", area1);
   		}

   		else
   		{
   			printf("Invalid input.");
   		}

   	}while (radius < 0);

   	return 0;
}

int rectangleArea()
{
	double length = 1;
	double height = 1;

   	do
   	{
   	   	double area2 = length * height;

   		printf("Enter the length of the rectangle: ");
   	    scanf("%lf", &length);

   	    printf("Enter the height of the rectangle: ");
   	    scanf("%lf", &height);

   	    if (length >= 0 && height >= 0)
   	    {
   	    	printf("The area of the rectangle is %.3lf.", area2);
   	    }

   	    else
   	    {
   	    	printf("Invalid input.");
   	    }

   	}while (length < 0 || height < 0);

   	return 0;
}

int triangleArea()
{
	double length = 0;
	double height = 0;

   	do
   	{
   		double area3 = length * height * 0.5;

   	    printf("Enter the length of the rectangle: ");
   	    scanf("%lf", &length);

   	    printf("Enter the height of the rectangle: ");
   	    scanf("%lf", &height);

   	    if (length >= 0 && height >= 0)
   	    {
   	    	printf("The area of the rectangle is %.3lf.", area3);
   	    }

   	    else
   	    {
   	    	printf("Invalid input.");
   	    }

   	}while (length < 0 || height < 0);

   	return 0;
}