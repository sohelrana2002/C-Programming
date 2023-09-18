#include <stdio.h>
#include <string.h>
#define total 5
struct employee
{
    char name[80];
    int age;
    float salary;
};
void emp_disp(struct employee em[total]);
void emp_sal(struct employee em[total]);
int main()
{
    struct employee emply[total];
    for (int i = 0; i < total; i++)
    {
        printf("Enter %dth name: ", i + 1);
        fgets(emply[i].name, 80, stdin);

        printf("Enter %dth age, salary: ", i + 1);
        scanf("%d %f", &emply[i].age, &emply[i].salary);
        fflush(stdin);
    }
    emp_disp(emply);
    emp_sal(emply);

    return 0;
}

void emp_disp(struct employee em[total])
{

    for (int i = 0; i < total; i++)
    {
        printf("%d: Name: %s Age: %d Salary: %f\n", i + 1, em[i].name, em[i].age, em[i].salary);
    }
}
void emp_sal(struct employee em[total])
{
    float temp = em[0].salary;
    int index = 0;

    for (int i = 0; i < total; i++)
    {
        if (temp < em[i].salary)
        {
            temp = em[i].salary;
            index = i;
        }
    }
    printf("For highest salary: Name: %s Age: %d Salary: %f\n", em[index].name, em[index].age, em[index].salary);
}
