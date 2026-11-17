#include <stdio.h>

int main(void) {
    float celsius = 25;
    float fahrenheit;

    fahrenheit = celsius * 9 / 5 + 32;

    printf("Temperature: %.1f degrees\nFahrenheit: %.1f degrees\n", celsius, fahrenheit);

    if (celsius >= 20) {
        printf("High temperature\n");
    } else {
        printf("Low temperature\n");
    }

    return 0;
}
