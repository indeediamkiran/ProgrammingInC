//sum of two matrices using pointer
#include <stdio.h>
#define R 3
#define C 3
void main(){
	int A[R][C], B[R][C], S[R][C], i, j;
	printf("Enter element of first matrix %dx%d\n", R, C);
	for(i = 0; i < R; i++){
		for(j = 0; j < C; j++){
			scanf(" %d", *(A+i)+j);
		}
	}
	printf("Enter element of second matrix %dx%d\n", R, C);
	for(i = 0; i < R; i++){
		for(j = 0; j < C; j++){
			scanf(" %d", *(B+i)+j);
		}
	}
	for(i = 0; i < R; i++){
		for(j = 0; j < C; j++){
			*(*(S+i)+j) = *(*(A+i)+j) + *(*(B+i)+j);
			//S[i][j] = A[i][j] + B[i][j];
		}
	}
	printf("\nResultant Matrix:\n");
	for(i = 0; i < R; i++){
		for(j = 0; j < C; j++){
			printf("%d  ", *(*(S+i)+j));
		}
		printf("\n");
	}
	getch();
}
