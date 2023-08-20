#include <stdio.h>

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

int main() {
    struct Employee employees[5]; 

    for (int i = 0; i < 5; i++) {
        printf("Enter details for Employee %d:\n", i + 1);

        printf("Employee number: ");
        scanf("%d", &employees[i].empno);

        printf("Employee name: ");
        scanf("%s", employees[i].empname);

        printf("Employee address: ");
        scanf(" %s", employees[i].address);

        printf("Employee age: ");
        scanf("%d", &employees[i].age);

        printf("\n");
    }

    printf("Employee Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Employee Number: %d\n", employees[i].empno);
        printf("Employee Name: %s\n", employees[i].empname);
        printf("Employee Address: %s\n", employees[i].address);
        printf("Employee Age: %d\n", employees[i].age);
        printf("\n");
    }

    return 0;
}
