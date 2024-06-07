#include<stdio.h>
int main()
{
	int basic_salary;
	float house_rent, medical, mobile_bill, eid_bonus;
	
	printf("Enter basic salary: ");
	scanf("%d", &basic_salary);
	//printf("%d", basic_salary);
	
	house_rent = basic_salary*0.06;
	medical = basic_salary*0.05;
	mobile_bill = basic_salary*0.02;
	eid_bonus = basic_salary;
	
	float salary_one_month = house_rent+ medical+ mobile_bill+ basic_salary;
	float total_salary_one_year = salary_one_month*12 +2*eid_bonus;
	
	printf("One month salary is: %f\n",salary_one_month);
	printf("One year salary is: %f",total_salary_one_year);
	
	return 0;
}
