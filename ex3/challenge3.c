#include <stdio.h>
int main () {
    float km;
    double yards;

    printf("write in KM<:\n");
    scanf("%f", &km);
    
    yards = km * 1093.61;
    printf("your distance in Yards is %.2lf", yards);

    return 0;
}