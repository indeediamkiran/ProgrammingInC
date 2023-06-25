#include <stdio.h>
#include <conio.h>
#include <math.h>
void area (void);
void main(){

	area();
	getch();	
}
void area ()
{
	float s1, s2, s3, s, ar;
	printf("Enter three sides of triangle: ");
	scanf("%f %f %f", &s1, &s2, &s3);
	s = (s1+s2+s3)/2;
	ar = sqrt (s*(s-s1)*(s-s2)*(s-s3));
	printf("Area = %f",ar);
	
}


