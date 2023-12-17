#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("Enter value for x: ");
    scanf("%d", &x);

    if(x<0)
    {
        printf("1");
    }
    else if(x==0)
    {
        printf("0");
    }
    else
    {
        printf("-1");
    }
    return 0;
}
