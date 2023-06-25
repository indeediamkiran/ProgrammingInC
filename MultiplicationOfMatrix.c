#include<stdio.h>
#include<conio.h>
#define m 3
#define n 3
void main(){
	int arr1[m][n],arr2[m][n],result[m][n];
	int i, j, k,sum;
	printf("Enter the value of first matrix\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter the [%d][%d] of the first matrix\n",i+1,j+1);
			scanf("%d",&arr1[i][j]);
		}
	}
	//input second matrix
	printf("Enter the value of second matrix\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter the [%d][%d] of the second matrix\n",i+1,j+1);
			scanf("%d",&arr2[m][n]);
		}
	//multiply
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			k=0;
			for(k=0;k<3;k++){
				sum = sum + arr1[i][k] * arr2[k][j];
				
			}
			result[i][j]=sum;
		}
	}
	//displaying
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d \t",result[i][j]);
		}
		printf("\n");
	}
	
}
	
	getch();
}
