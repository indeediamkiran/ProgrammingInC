#include <stdio.h>
#include <conio.h>
#include <math.h>

void area (float, float, float);

void main (){
	float a, b, c;
	printf("Enter the value of a, b, c: ");
	scanf("%f %f %f", &a, &b, &c);
	area (a, b, c);
	
	getch();
}
void area (float a, float b, float c) {
	float s, area;
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("The area is %f",area);
}
