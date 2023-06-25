#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,len,x;
	char logo[]="PROGRAMMING";
	len = 11;
	for(i=1;i<=len;i++){
		x=0;
		for(j=11;j>=i;j--){
			printf(" %c",logo[x]);
			x++;
		}
		printf("\n");
	}
	
	getch();
}
