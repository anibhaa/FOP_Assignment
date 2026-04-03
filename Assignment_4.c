#include<stdio.h>
int main(){
    float BP,HRA,GA,TA,tax, net_salary;
    printf("Enter basic pay");
    scanf("%f", &BP);
    HRA = (0.10)*BP;
    GA = BP + HRA + TA;
    TA = (0.05)*BP;
    tax = (0.02)*GA;
    net_salary = GA - tax;
    //printf("GA is %f\n", GA);
    printf("net_salary is %f\n", net_salary);
    return 0;
}