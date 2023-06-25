#include <stdio.h>
#include <conio.h>
#include <math.h>
float area (float, float, float);
void main(){
	float s1, s2, s3, ar;
	printf("Enter three sides of triangle: ");
	scanf("%f %f %f", &s1, &s2, &s3);
	ar = area(s1,s2,s3);
	printf("Area = %f",ar);
	getch();
}
float area(float a,float b,float c)
{
	float s, ar;
	s = (a+b+c)/2;
	ar = sqrt (s*(s-a)*(s-b)*(s-c));
	return ar;
}
