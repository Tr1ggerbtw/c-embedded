#include <stdio.h>
#define _USE_MATH_DEFINES // for C (uisng it for M_PI constant)
#include <math.h>


float first_equation(float alpha)
{

    float num1 = sinf(4.0f * alpha);
    float den1 = 1.0f + cosf(4.0f * alpha);

    float num2 = cosf(2.0f * alpha);
    float den2 = 1.0f + cosf(2.0f * alpha);

    if(den1 == 0.0f || den2 == 0.0f)
    {
        printf("You can't divide by 0. Error\n");
        return NAN;
    }

    float fraction1 = num1 / den1;
    float fraction2 = num2 / den2;

return fraction1 * fraction2;
}

float second_equation(float alpha)
{
    float angle = (3.0f / 2.0f) * (float)M_PI - alpha;
    float tangent = tanf(angle);

    if(tangent == 0.0f)
    {
        printf("You can't divide by 0. Error\n");
        return NAN;
    }

    return 1.0f / tangent;
}

int main()
{
float a = 0;
float b = 0;
    scanf("%f", &a);
    float first_result = first_equation(a);
    printf("%f\n", first_result);

    scanf("%f", &b);
    float second_result = second_equation(b);
    printf("%f\n", second_result);

return 0;
}