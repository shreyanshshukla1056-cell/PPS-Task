
// 3. Area and Circumference of a Circle

#include <stdio.h>

int main() {

    float radius, area, circumference;
    float PI = 3.14;

    printf("Enter the radius of the circle:");
    scanf("%f", &radius);

    area = PI * radius * radius;

    circumference = 2 * PI * radius;

    printf("Area of the circle: %f\n", area);
    printf("Circumference of the circle: %f", circumference);

    return 0;
}