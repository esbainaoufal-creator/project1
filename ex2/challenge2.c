#include <stdio.h>
int main () {
    int celsius;
    float kelvin;

    printf("Write in Celsius:\n");
    scanf("%d", &celsius);

    kelvin = 273.15 + celsius;
    printf("Your degree in Kelvin is: %.2f\n", kelvin);
    return 0;
}