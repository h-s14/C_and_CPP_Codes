#include<stdio.h>
int main()
{
    float gross_salary,basic;
    printf("Enter The Basic Salary\n");
    scanf("%f",&basic);
    gross_salary=basic+(basic*10/100)+(basic*12/100);
    printf("The Gross Salary is %f\n",gross_salary);
    return 0;
}