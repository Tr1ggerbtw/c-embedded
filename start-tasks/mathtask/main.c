#include <stdio.h>
#include <math.h>

float first_equation(float alpha)
{

float numerator = 1.0f - (2.0f * sinf(alpha) * sinf(alpha));
float denominator = 1.0f + sinf(2.0f * alpha);

    if(denominator == 0.0f)
    {
        printf("You can't divide by 0. Error\n");
        return NAN;
    }

return numerator / denominator;
}

float second_equation(float alpha)
{
float numerator = 1.0f - tanf(alpha);
float denominator = 1.0f + tanf(alpha);

    if(denominator == 0.0f)
    {
        printf("You can't divide by 0. Error\n");
        return NAN;
    }

return numerator / denominator;
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