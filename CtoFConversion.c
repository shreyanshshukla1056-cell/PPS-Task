// 4. Centigrade to Fahrenheit Conversion

#include <stdio.h>

int main() {
    float centigrade, fahrenheit;

    printf("Enter the temperature in Centigrade:");
    scanf("%f", &centigrade);

    // Fahrenheit Formula: (C * 9/5) + 32
    fahrenheit = (centigrade * 9 / 5) + 32;

    printf("Temperature in Fahrenheit: %f", fahrenheit);

return 0;
}
