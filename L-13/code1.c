// print 'a' to 'z' using do while loop 3 alfabet skip

#include <stdio.h>
int main()
{
    char ch = 'a';
    do
    {
        printf("%c ", ch);
        ch+=3;
    } while (ch <= 'z');
}


