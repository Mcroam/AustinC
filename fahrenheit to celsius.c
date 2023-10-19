#include <stdio.h>

int main(void)
{
    float a, b, c;

    printf("Starting Fahrenheit value: ");
    scanf("%f", &a);

    printf("Ending Fahrenheit value: ");
    scanf("%f", &b);

    printf("Enter the increment: ");
    scanf("%f", &c);

    printf("Fahrenheit to Celsius Table\n");
    printf("%6s %15s\n", "Fahrenheit", "Celsius");

    while (a <= b)
    {
        printf("%6.2f degrees F = %6.2f degrees C\n",
            a, (a - 32.0) * 5.0 / 9.0);
        a = a + 10;
    }

    return 0;
}
