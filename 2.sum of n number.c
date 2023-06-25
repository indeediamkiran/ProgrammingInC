#include <stdio.h>

void main(){
	int i, a, sum=0;
	printf("Enter any number: ");
	scanf("%d", &a);
	for (i=1;i<=a;i++){
		sum+=i;
	}
	printf("The sum is %d",sum);
	getch();
}
