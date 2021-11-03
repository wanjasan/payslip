/*
   PROJECT:  PAYROLL   SYSTEM
   AUTHOR;   SANDRA WANJA
   DATE:     24 OCTOBER 2021
   COMPILER: GNC GCC
   LANGUAGE: C99
   LICENSE:  MIT
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variable Declarations
    char name[100], pin[10];
    int emp_no, hours;
    int normal_pay;
    float overtime_pay, tax, gross, net;
    const int rate = 1000;

    printf("\t Gitonga's Factory Payroll System\n");

    printf("Employee name: ");
    gets(name);
    printf("KRA PIN: ");
    gets(pin);
    printf("Employee number: ");
    scanf("%d", &emp_no);
    printf("Hours worked: ");
    scanf("%d", &hours);

    //Computations
    printf("Employment number: %d\n", emp_no);
    if (hours > 40)
    {
        normal_pay = rate*40;
        overtime_pay = (hours - 40)*1.5*rate;
    }
    else
    {
        normal_pay = rate*hours;
        overtime_pay = 0;
    }
    gross =normal_pay + overtime_pay;
    tax = 0.3 * gross;
    net = gross - tax;

    //Output
    printf("Employment Number: %d\n",   emp_no);
    printf("Employee   Name:   %s\n",   name);
    printf("KRA        PIN:    %s\n",   pin);
    printf("Normal     Pay:    %d\n",   normal_pay);
    printf("Overtime   Pay:    %.2f\n", overtime_pay);
    printf("Tax        Paid:   %.2f\n", tax);
    printf("Net        Income: %.2\n",  net);
    return 0;

}
