#include <stdio.h>

void fortune_cookie(char msg[])
{
    printf("Message read: %s\n", msg);
    printf("msg occupies %lu bytes\n", sizeof(msg));
}

int main(){
    char quote[]= "Cookies make you fat";
    fortune_cookie(quote);

    return 0;
}