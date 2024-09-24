#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	#include <stdio.h>

int main() {
    int age;
    float height;
    char name[50];

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Hello, %s! You are %d years old and %.2f meters tall.\n", name, age, height);
    return 0;
}

