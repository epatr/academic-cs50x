#include <stdio.h>
#include <cs50.h>

int main(void) {

    printf("minutes: ");

    int minutes = GetInt();

    float gallons = minutes * 1.5;
    float ounces = gallons * 128;
    int bottles = ounces / 16;

    printf("bottles: %i\n", bottles);

}