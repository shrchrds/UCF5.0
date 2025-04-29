#include<stdio.h>
#include<string.h>

// Q. 1 Define a structure Employee with member variables id, name, salary

struct Employee
{
    int id;
    char name[50];
    int salary;
};

// Q. 2 WAF to take input employee data from the user.

struct Employee input( )
{
    struct Employee e;
    printf("Enter employee data: \n");
    scanf("%d",&e.id);
    fflush(stdin);
    fgets(e.name, 50, stdin);
    e.name[strlen(e.name)-1] = '\0';
    scanf("%d",&e.salary);
    return e;
}

// Q. 3 WAF to display employee data.
void display(struct Employee e)
{
    printf("\n%d %s %d", e.id, e.name, e.salary);
}

// int main()
// {
//     int i;
//     struct Employee e1[2];
//     for (i=0;i<2;i++)
//         e1[i] = input(e1);
//     for (i=0;i<2;i++)
//         display(e1[i]);
// }

// Q.4 WAF to find the highest salary employee from given array of 10 employees.
struct Employee HighestSalary()
{
    struct Employee e[10];
    struct Employee emp;
    emp.salary = 0;
    int i;
    printf("Enter employee data for 10 employees: \n");
    for (i=0;i<10;i++)
        e[i] = input(e);
    for (i=0;i<10;i++)
        {
            if (e[i].salary > emp.salary)
                {
                    emp.id = e[i].id;
                    strcpy(emp.name,e[i].name);
                    emp.salary = e[i].salary;                    
                }
        }
    
    display(emp);
}

// Q.5 WAF to sort employees according to their salaries
struct Employee SortBySalary()
{
    struct Employee e[5];
    struct Employee emp;
    int i, j;
    printf("Enter employee data for 5 employees: \n");
    for (i=0;i<5;i++)
        e[i] = input(e);
    
    for (j=1;j<5;j++)
        {
        for (i=1;i<5;i++)
        {
            if (e[i-1].salary > e[i].salary)
                {
                    emp.id = e[i-1].id;
                    strcpy(emp.name,e[i-1].name);
                    emp.salary = e[i-1].salary;
                    
                    e[i-1].id = e[i].id;
                    strcpy(e[i-1].name,e[i].name);
                    e[i-1].salary = e[i].salary;

                    e[i].id =  emp.id;
                    strcpy(e[i].name,emp.name);
                    e[i].salary = emp.salary;
                }
        }}
    for (i=0;i<5;i++)
        display(e[i]);
}

// Q.6 WAF to sort employees according to their names
struct Employee SortByName()
{
    struct Employee e[5];
    struct Employee emp;
    int i, j;
    printf("Enter employee data for 5 employees: \n");
    for (i=0;i<5;i++)
        e[i] = input(e);
    
    for (j=1;j<5;j++)
        {
            for (i=1;i<5;i++)
            {
                
            if ( strcmp(e[i-1].name, e[i].name)> 0)
                    {
                        emp.id = e[i-1].id;
                        strcpy(emp.name,e[i-1].name);
                        emp.salary = e[i-1].salary;
                        
                        e[i-1].id = e[i].id;
                        strcpy(e[i-1].name,e[i].name);
                        e[i-1].salary = e[i].salary;

                        e[i].id =  emp.id;
                        strcpy(e[i].name,emp.name);
                        e[i].salary = emp.salary;
                    }
            }
        }
    for (i=0;i<5;i++)
        display(e[i]);
}


int main()
{
    SortByName();
}