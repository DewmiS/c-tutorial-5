#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jno; //job number
    int l_no; //level number
    float salary; //basic salary
    float g_salary; //gross salary
    float n_salary; //net salary
    float sal_1;

    printf("Enter executive's job number: ");
    scanf("%d", &jno);
    printf("Enter the level number: ");
    scanf("%d", &l_no);
    printf("Enter the basic salary: ");
    scanf("%f", &salary);



    sal_1 = salary + salary*(0.25);

    if (l_no==1)
    {
        g_salary = sal_1 + 1000 + 500;

        if(g_salary<2000)
        {
            n_salary = g_salary;
            printf("Net salary is %.3f", n_salary);
        }
        else if((g_salary>=2000) && (g_salary<4000))
        {
            n_salary = g_salary - g_salary*0.03;
            printf("Net salary is %.3f", n_salary);
        }
        else if((g_salary>=4000) && (g_salary<6000))
        {
            n_salary = g_salary - g_salary*0.05;
            printf("Net salary is %.3f", n_salary);
        }
        else
        {
            n_salary = g_salary - g_salary*0.08;
            printf("Net salary is %.3f", n_salary);
        }
    }
     else if (l_no==2)
    {
        g_salary = sal_1 + 750 + 200;

        if(g_salary<2000)
        {
            n_salary = g_salary;
            printf("Net salary is %.3f", n_salary);
        }
        else if((g_salary>=2000) && (g_salary<4000))
        {
            n_salary = g_salary - g_salary*0.03;
            printf("Net salary is %.3f", n_salary);
        }
        else if((g_salary>=4000) && (g_salary<6000))
        {
            n_salary = g_salary - g_salary*0.05;
            printf("Net salary is %.3f", n_salary);
        }
        else
        {
            n_salary = g_salary - g_salary*0.08;
            printf("Net salary is %.3f", n_salary);
        }
    }
    else if (l_no==3)
    {
        g_salary = sal_1 + 500 + 100;

        if(g_salary<2000)
        {
            n_salary = g_salary;
            printf("Net salary is %.3f", n_salary);
        }
        else if((g_salary>=2000) && (g_salary<4000))
        {
            n_salary = g_salary - g_salary*0.03;
            printf("Net salary is %.3f", n_salary);
        }
        else if((g_salary>=4000) && (g_salary<6000))
        {
            n_salary = g_salary - g_salary*0.05;
            printf("Net salary is %.3f", n_salary);
        }
        else
        {
            n_salary = g_salary - g_salary*0.08;
            printf("Net salary is %.3f", n_salary);
        }
    }
    else if(l_no==4)
    {
        g_salary = sal_1 + 250 + 0;

        if(g_salary<2000)
        {
            n_salary = g_salary;
            printf("Net salary is %.3f", n_salary);
        }
        else if((g_salary>=2000) && (g_salary<4000))
        {
            n_salary = g_salary - g_salary*0.03;
            printf("Net salary is %.3f", n_salary);
        }
        else if((g_salary>=4000) && (g_salary<6000))
        {
            n_salary = g_salary - g_salary*0.05;
            printf("Net salary is %.3f", n_salary);
        }
        else
        {
            n_salary = g_salary - g_salary*0.08;
            printf("Net salary is %.3f", n_salary);
        }
    }
    return 0;
}
