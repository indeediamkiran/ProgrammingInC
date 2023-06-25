#include<stdio.h>
#include<conio.h>
void main(){
	int choice, a, b, s, n;
	while (1)
	{
	printf("\n\n1.Addition.\n2.Odd Even.\n3.Printing N number.\n4.Exit");
	printf("\n\nEnter your choice:");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			printf("Enter the value of a: ");
			scanf("%d", &a);
			printf("Enter the value of b: ");
			scanf("%d", &b);
			s = a + b;
			printf("The sum of %d and %d is %d", a, b, s);
			break;
		case 2:
			printf("Enter any number.");
			scanf("%d", &a);
			if (a%2 == 0)
			{
				printf("%d is even number: ", a);
			}
			else 
			printf("%d is odd number: ", a);
			break;
		case 3:
			printf("Enter the value of n: ");
			scanf("%d", &n);
			s = (n*(n+1))/2;
			printf("The sum of %d natural number is %d", n, s);
			break;
		case 4:exit(0);
		default : 
		printf("Invalid choice: ");
		break;
			}
			getch();
	}	
			}
