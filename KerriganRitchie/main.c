#include <stdio.h>

int main(void)
{
    int c;
    int num=0;
    
    while ((c = getchar()) != EOF){
        if (c == ' ')
            ++num;
    }
    printf("\n");
    printf("%s%d\n","Number of blanks: ", num);
}
