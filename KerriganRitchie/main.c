#include <stdio.h>

int main(void){
    int c, pc = EOF;
    
    while ((c=getchar()) != EOF) {
        if ((c != ' ')&&(c != '\t')) {
            putchar(c);
        }else if ((pc != ' ')&&(pc != '\t')) {
            putchar('\n');
        }
        pc = c;
    }
}