#include <stdio.h>
#include <cs50.h>

int main(void) {
    printf("Water: ");
    int i = get_int();
    int b = i * 12;
    printf("Bottles: %i\n", b);
}