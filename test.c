#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {int day = 3}
switch (day) 
    case 1:
        printf("Monday\n");
        break; // Exit switch after this case
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        // No break here means it will fall through to the next case if it exists
    default:
        printf("Another day\n");


	return 0;
}
