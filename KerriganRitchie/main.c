#include <stdio.h>

int main(void)
{
    int c, pc = EOF;
    
    while ((c = getchar()) != EOF){
        if (pc != ' ')
            putchar(c);
        if ((pc == ' ') && (c != ' '))
            putchar(c);
        pc = c;
    }
}