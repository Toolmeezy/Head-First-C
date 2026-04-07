#include <stdio.h>
void skip(char *msg)
{
    {
        puts(msg + 6);
    }
}

char *msg_from_amy = "Don't call me";
int main()
{
    skip(msg_from_amy);
    return 0;
}