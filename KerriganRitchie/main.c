#include <stdio.h>

// print Fahrenheit-Celsius Table for
// fahr = 0, 20, .., 300

#include <stdio.h>

// print Celsius-Fahrenheit Table for
// fahr = 0, 20, .., 300

int main(void)
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;      // lower limit of temperature table
    upper = 300;    // upper limit
    step = 20;      // step size
    
    printf("%s\t%s\n", "Celsius", "  Fahr");
    
    celsius = lower;
    while (celsius <= upper) {
        fahr = 9.0 * celsius / 5.0 + 32;
        printf("%7.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
