#include <stdio.h>

int main() {
    char dangerous[10];
    puts("let's see what happens: ");
    gets(dangerous);
    return 0;
}