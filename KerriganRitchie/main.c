#include <stdio.h>

// print Fahrenheit-Celsius Table for
// fahr = 0, 20, .., 300

#define UPPER 100
#define LOWER 0
#define STEP 1

int main(void)
{
    float fahr;
    printf("%s\t%s\n", "Fahr", "Celsius");
    
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr-STEP){
        printf("%4.0f\t%7.1f\n", fahr, (5.0 / 9.0 * (fahr-32)));
    }
}