#include <stdio.h>
#include <stdlib.h>

struct Date
{
	int dd,mm,yy;	
};

struct Bill
{
	float amount,fee;
};

struct Patient
{
	int id,age;
	Date date1;
	Bill bill1;	
};

int main()
{
	Patient patient1[3];
	for (int i=0;i<3;i++)
	{
		printf("Patient ID:");
		scanf("%d",&patient1[i].id);
		printf("Patient DOB:");
		scanf("%d%d%d",&patient1[i].date1.dd,&patient1[i].date1.mm,&patient1[i].date1.yy);
		printf("Consultation Fee:");
		scanf("%f",&patient1[i].bill1.fee);
		printf("Amount:");
		scanf("%f",&patient1[i].bill1.amount);
	}
	printf("Patient ID\tDOB\t\n");
	for (int i=0;i<3;i++)
	{
		printf("%d\t\t: %d.%d.%d\t\n",patient1[i].id,patient1[i].date1.dd,patient1[i].date1.mm,patient1[i].date1.yy);
	}
	printf("\n");
	printf("Patient ID\tBill\n");
	printf("_______________________\n");
	for (int i=0;i<3;i++)
	{
		printf("%d\t\tRM %.2f\n",patient1[i].id,patient1[i].bill1.fee+patient1[i].bill1.amount);	
	}
	return 0;	
}