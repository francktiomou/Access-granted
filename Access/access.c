#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int employee_ID, Training, account;
	printf("enter employeeID..(1=yes||0=no) \n");
	scanf("%d",&employee_ID);
	printf("security training..(1=complete||0=incomplete) \n");
	scanf("%d",&Training);
	printf(" employee account..(1=active||0=inactive)\n");
	scanf("%d",&account);
	
	if( employee_ID==0){
		printf("Access rejected| invalid employeeID\n");
		}
	else if(Training==0){
			printf("Access rejected| Training required\n");
		}
	else if(account==0){
			printf("Access rejected| Account inactive");
		}
	
	else
	printf("Access granted");
	return 0;
}
