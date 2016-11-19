#include <stdio.h>

// Define states for INSIDE or OUTSIDE a word
#define INSIDE 1
#define OUTSIDE 0

int main(void){
    int c, state = INSIDE, currentlength = 0;
    
    // The array wordcount keeps the number of occurences of a word of length wordcount [length]
    int wordcount[30];
    
    // Initialize wordcount to 0 for all values of length
    for (int i = 0; i < 30; ++i){
        wordcount[i] = 0;
    }
    
    // Start reading the input stream
    while ((c = getchar()) != EOF){
        if ((c != ' ') && (c != '\t') && (c != '\n')){
            ++currentlength;
        } else {
            ++wordcount[currentlength];
            currentlength = 0;
            state = OUTSIDE;
        }
    }
    
    // Print the histogram
    for (int i = 1; i < 30; ++i){
        printf("%2d: ", i);
        for (int j = 0; j < wordcount[i]; ++j){
            printf("%c", '|');
        }
        printf("\n");
    }
}