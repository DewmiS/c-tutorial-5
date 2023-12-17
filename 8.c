#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    float x1, x2, x3, x4, x5, y1, y2;

    printf("Enter values for a,b,c: ");
    scanf("%d %d %d", &a,&b,&c);

    if((a==0) && (b==0))
    {
        while((b==0) || (a==0))
        {
            printf("Enter at least one non zero real number: ");
            scanf("%d %d", &a,&b);
        }
    }
    else if(((b*b)-(4*a*c))<0)
    {
        printf("\nNo real roots with above values");
    }
    else if(a==0)
    {
        x3 = -c/b;
        x4 = c/b;
        if(c==0)
        {
            printf("Solution is %.2f", x4);
        }
        else
        {
            printf("Solution is %.2f", x3);
        }
    }
    else if((b==0) && (a!=0))
    {
        x5 = sqrt(-c/a);
        if((a<0 && c>0) || (a>0 && c<0))
        {
            printf("Solution is %.2f", x5);
        }
        else
        {
            printf("No real roots with above values");
        }
    }
    else
    {
        y1 = sqrt((b*b)-(4*a*c));
        x1 = ((-b) + y1)/(2*a);
        x2 = ((-b) - y1)/(2*a);

        printf("\nRoots are %.2f & %.2f",x1,x2);
    }
    return 0;
}
