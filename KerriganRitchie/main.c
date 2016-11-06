//
//  main.c
//  KerriganRitchie
//
//  Created by Deniz Kaya on 05/11/16.
//  Copyright © 2016 Deniz Kaya. All rights reserved.
//

#include <stdio.h>

int main(void){
    int c;
    
    // The array charcount keeps the number of occurences of a character
    int charcount[224];
    
    // Initialize charcount to 0 for all characters
    for (int i = 0; i < 224; ++i){
        charcount[i] = 0;
    }
    
    // Start reading the input stream
    while ((c = getchar()) != EOF){
        if (c >= ' '){
            ++charcount[c-' '];
        }
    }
    
    // Print the histogram
    for (int i = 1; i < 224; ++i){
        printf("%c: ", i+32);
        for (int j = 0; j < charcount[i]; ++j){
            printf("%c", '|');
        }
        printf("\n");
    }
}