/*
 * Program to evaluate few values.
 * Released under the Vegas License.
 * (c)2014 The College Blackjack Team.
 */

 #include <stdio.h>
 #include <stdlib.h>
  
 int main () {
    char card_name[3];
    int count = 0;
    do {
        puts("Enter the card name: ");
        scanf("%2s", card_name);
        int val = 0;
        switch(card_name[0]) {
            case 'K':
            case 'Q':
            case 'J':
                val = 10;
                break;
            case 'A':
                val = 11;
                break;
            case 'X':
                exit(0);
            default:
                val = atoi(card_name);
                if ((val < 1) && (val > 10))
                continue;
            }
            if ((val > 2) && (val < 7)) {
                count++;    
            } else if (val == 10) {
                count--;
            }
            printf("Current count: %i\n", count);
        } while (count != 'X');
        return 0;
    } 

  
  
  
 
 