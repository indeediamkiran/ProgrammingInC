

#include <stdio.h>
#include <conio.h>
#define N 3
struct account{
	int acc;
	char name[30];
	char type[10];
	float balance;
};
void main(){
	int i;
	struct account a[N], ac;
	FILE *fp;
	fp = fopen("account.txt", "w+");
	printf("Enter detail information:\n");
	for(i = 0; i < N; i++){
		printf("Account Number? ");
		scanf(" %d", &a[i].acc);
			printf("Name? ");
			scanf(" %[^\n]", a[i].name);
			printf("Account Type? ");
			scanf(" %s", a[i].type);
			printf("Available Balance? ");
				scanf(" %f", &a[i].balance);
			fwrite(&a[i],sizeof(struct account),1, fp);
	}
	rewind(fp);
		printf("\nDetails of employee:\n");
		fread(&ac, sizeof(struct account), 1, fp);
		for(i = 0; i < N; i++){
		
		if(ac.balance >= 10000){
			printf("\nAccount#: %d", ac.acc);
			printf("\nName: %s", ac.name);
			printf("\nType: %s", ac.type);
			printf("\nBalance: %f", ac.balance);
		}
		fread(&ac, sizeof(struct account), 1, fp);
	}
	fclose (fp);
	getch();
}
