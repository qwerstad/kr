#include <stdio.h>

int main(void)
{
    char c;
    
    c = getchar();
    
    while (c != EOF){
        // putchar(c);
        c = getchar();
    }
    
    printf("%s\n", "EOF found");
}