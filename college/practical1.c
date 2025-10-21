#include <stdio.h>

void main() {
    float basic_salary, hra, da, gross_salary, ta;
    printf("Enter the basic salary: \n");
    scanf("%f", &basic_salary);
    ta = 1600;
    hra = 0.1 * basic_salary;
    da = 0.3 * basic_salary;

    gross_salary = basic_salary + hra + da + ta;
    printf("The gross salary is: %.2f\n", gross_salary);
}