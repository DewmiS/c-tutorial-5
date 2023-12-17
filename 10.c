#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h; //height
    int w; //weight
    float bmi;
    char name[50];

    printf("Enter your name: ");
    scanf("%s", &name[50]);
    printf("Enter your mass(in kilograms): ");
    scanf("%d", &w);
    printf("Enter your height(in meters): ");
    scanf("%f", &h);

    bmi = w/(h*h);

    if(bmi<18.5)
    {
        printf("Risk of developing problems such as nutritional deficiency and osteoporosis");
    }
    else if((bmi>=18.5) && (bmi<23))
    {
        printf("Low Risk (healthy range)");
    }
    else if((bmi>=23) && (bmi<27.5))
    {
        printf("Moderate risk of developing heart disease, high blood pressure, stroke, diabetes ");
    }
    else
    {
        printf("High risk of developing heart disease, high blood pressure, stroke, diabetes");
    }
    return 0;
}
