#include<stdio.h>
void main(){
	int x, y, sum;
	printf("Enter the value of x: ");
	scanf("%d", &x);
	printf("Enter the value of y: ");
	scanf("%d", &y);
	sum = x + y;
	printf("The sum of %d and %d is %d",x,y, sum);
	getch();
}
