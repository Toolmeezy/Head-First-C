#include <stdio.h>

int main() {
    char food[5];
    puts("Enter favourite food: ");
    fgets(food, sizeof(food), stdin);
    return 0;
}