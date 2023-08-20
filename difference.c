#include <stdio.h>

// Structure definition
struct Employee {
    int empno;
    char empname[50];
    float salary;
};

// Union definition
union Data {
    int intValue;
    float floatValue;
    char stringValue[20];
};

int main() {
    // Structure usage
    struct Employee emp1;
    emp1.empno = 101;
    strcpy(emp1.empname, "John");
    emp1.salary = 50000.0;

    printf("Employee Information (using Structure):\n");
    printf("Employee Number: %d\n", emp1.empno);
    printf("Employee Name: %s\n", emp1.empname);
    printf("Employee Salary: %.2f\n\n", emp1.salary);

    // Union usage
    union Data data;
    data.intValue = 10;
    printf("Value stored in intValue of union: %d\n", data.intValue);

    data.floatValue = 3.14;
    printf("Value stored in floatValue of union: %.2f\n", data.floatValue);

    strcpy(data.stringValue, "Hello");
    printf("Value stored in stringValue of union: %s\n", data.stringValue);

    printf("\nAfter modifying the values:\n");
    printf("Value stored in intValue of union: %d\n", data.intValue);
    printf("Value stored in floatValue of union: %.2f\n", data.floatValue);
    printf("Value stored in stringValue of union: %s\n", data.stringValue);

    return 0;
}
