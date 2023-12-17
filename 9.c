#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    int p;

    printf("Enter 3 integer values: ");
    scanf("%d %d %d", &a,&b,&c);

    if(a>b)
    {
        if(a>c)
        {
            p = (b*b) + (c*c);
            if(p==a*a)
            {
                printf("They are the sides of the right-angled triangle.");
            }
            else
            {
                printf("These sides do not form a right-angled triangle.");
            }
        }
        else
        {
            p = (b*b) + (a*a);
            if(p==c*c)
            {
                printf("They are the sides of the right-angled triangle.");
            }
            else
            {
                printf("These sides do not form a right-angled triangle.");
            }
        }
    }
    else if(b>c)
    {
        p = c*c + a*a;
        if(p==b*b)
        {
            printf("They are the sides of the right-angled triangle.");
        }
        else
        {
            printf("These sides do not form a right-angled triangle.");
        }
    }
    else
    {
        p = a*a + b*b;
        if(p==c*c)
        {
            printf("They are the sides of the right-angled triangle.");
        }
        else
        {
            printf("These sides do not form a right-angled triangle.");
        }
    }


    return 0;
}
