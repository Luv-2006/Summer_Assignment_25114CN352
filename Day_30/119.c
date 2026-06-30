#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basic, hra, da, gross;
};

int main() {
    struct Employee emp;
    float hraRate = 0.20, daRate = 0.10;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &emp.basic);

    emp.hra = emp.basic * hraRate;
    emp.da = emp.basic * daRate;
    emp.gross = emp.basic + emp.hra + emp.da;

    printf("\n===== PAY SLIP =====\n");
    printf("ID            : %d\n", emp.id);
    printf("Name          : %s\n", emp.name);
    printf("Basic Salary  : %.2f\n", emp.basic);
    printf("HRA           : %.2f\n", emp.hra);
    printf("DA            : %.2f\n", emp.da);
    printf("Gross Salary  : %.2f\n", emp.gross);

    return 0;
}
