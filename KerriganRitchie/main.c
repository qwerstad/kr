//
//  main.c
//  KerriganRitchie
//
//  Created by Deniz Kaya on 05/11/16.
//  Copyright © 2016 Deniz Kaya. All rights reserved.
//

#include <stdio.h>

#define UPPER 500
#define LOWER 0
#define STEP 20

float fahrtocels(int fahr);

int main(void){
    printf("%s\t%s\n", "Fahr", "Celsius");
    
    for (int fahr = LOWER; fahr <= UPPER; fahr = fahr+STEP){
        printf("%4d\t%7.1f\n", fahr, fahrtocels(fahr));
    }
}

float fahrtocels(int fahr){
    return (5.0 * (fahr-32) / 9.0);
}