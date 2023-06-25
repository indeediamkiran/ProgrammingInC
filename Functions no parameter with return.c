#include<stdio.h>
#include<conio.h>
#include<math.h>
float area();
void main(){
	float ar;
	ar = area();
	printf("The area is %f",ar);
	getch();
}
float area(){
	float x, y, z, s, ar;
	printf("Enter the value of a,b,c\n");
	scanf("%f%f%f",&x,&y,&z);
	s = (x+y+z)/2;
	ar = sqrt(s*(s-x)*(s-y)*(s-z));
	return ar;
}
