#include <stdio.h>

#define MAXLINE 10 /* maximum input line size */

int getlines(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main(void)
{
    int len;               /* current line length */
    int max;               /* maximum length seen so far */
    char line[MAXLINE];    /* current input line */
    char longest[MAXLINE]; /* longest line saved here */
    
    max = 0;
    
    while((len = getlines(line, MAXLINE)) > 0)
    {
        printf("%d: %s", len, line);
        
        if(len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
    if(max > 0)
    {
        printf("Longest is %d characters:\n%s", max, longest);
    }
    printf("\n");
    return 0;
}

/* getline: read a line into s, return length */
int getlines(char s[], int lim)
{
    int c, i, j;
    
    for(i = 0, j = 0; (c = getchar())!=EOF && c != '\n'; ++i)
    {
        if(i < lim - 1)
        {
            s[j++] = c;
        }
    }
    if(c == '\n')
    {
        if(i <= lim - 1)
        {
            s[j++] = c;
        }
        ++i;
    }
    s[j] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume 'to' is big enough */
void copy(char to[], char from[])
{
    int i;
    
    i = 0;
    while((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}