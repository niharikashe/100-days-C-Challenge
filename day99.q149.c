Q149: Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
   
    struct Employee *emp = (struct Employee*) malloc(sizeof(struct Employee));

    if (emp == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &emp->id);

    printf("Enter Name: ");
    scanf("%s", emp->name);

    printf("Enter Salary: ");
    scanf("%f", &emp->salary);

    printf("\nEmployee Details:\n");
    printf("ID: %d\n", emp->id);
    printf("Name: %s\n", emp->name);
    printf("Salary: %.2f\n", emp->salary);

    free(emp);

    return 0;
}
