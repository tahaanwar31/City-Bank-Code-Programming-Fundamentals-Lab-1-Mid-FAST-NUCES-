#include <stdio.h>
#include <conio.h>
#include <limits.h>
int main()
{
	int AccountNumber,ItemsPurchased;
	float BeginningBalance,Charge,TotalCharges=0,TotalCredits,CreditsAllowed,NewBalance;
	printf("Enter your account number: \n");
	scanf("%d",&AccountNumber);
	printf("Enter your beginning balance for the month: \n");
	scanf("%f",&BeginningBalance);
	printf("Enter the number of items purchased this month: \n");
	scanf("%d",&ItemsPurchased);
	for (int i=1;i<=ItemsPurchased;i++)
	{
		printf("Enter the charge for item %d\n",i);
		scanf("%f",&Charge);
		TotalCharges=TotalCharges+Charge;
	}
	printf("Enter the total credits applied to your account this month: \n");
	scanf("%f",&TotalCredits);
	printf("Enter your allowed credit limit: \n");
	scanf("%f",&CreditsAllowed);
	NewBalance=(BeginningBalance+TotalCharges)-TotalCredits;
	if(NewBalance>CreditsAllowed)
	{
		printf("Account Number: %d\n",AccountNumber);
		printf("Credit Limit: %f\n",CreditsAllowed);
		printf("New Balance: %f\n",NewBalance);
		printf("Credits limit exceeded by %f\n",NewBalance-CreditsAllowed);
	}
}