#include <stdio.h>

int main(void)
{
    float a = 0;

    printf("miles to Kilometers Conversion Table\n");
    printf("%6s %15s\n", "Miles", "KiloMeters");

    while (a <= 100){
        printf("%6.2f m = %6.2f KM\n",
            a, (a * 1.6));
        a = a + 5;
    }
    return 0;
}
