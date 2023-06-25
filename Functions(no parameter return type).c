#include <stdio.h>
#include <conio.h>
#include <math.h>
float area(void);
void main(){
	float ar;
	ar = area ();
	printf("The area is %f",ar);
	getch();
}

float area (){
	float a, b, c, s, area;
	printf("Enter three sides: ");
	scanf("%f %f %f",&a,&b,&c);
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	return area;
}
