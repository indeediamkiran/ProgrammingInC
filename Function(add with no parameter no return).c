#include<stdio.h>
#include <conio.h>
void add(void);
void main(){
	add();
	getch();
}
void add()
{
	int a, b, sum;
	printf("Enter the value of a and b: ");
	scanf("%d %d",&a, &b);
	sum = a + b;
	printf("The sum of %d and %d is %d", a, b, sum);
}
 
