#include <stdio.h>
#include <string.h>

void print_reverse(char *s)
{
    size_t len = strlen(s);
    char *t = s + len - 1;

    while (t >= s) {
        printf("%c", *t);
        t = t - 1;
    }
    puts("");
}

int main (void) {
    char input[100];
    printf("Put your word here: \n");
    fgets(input, sizeof(input), stdin);
    input[strlen(input) -1 ] = '\0';
    print_reverse(input);
    return 0;
}

