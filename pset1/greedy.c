#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("O hai! ");
    float float_change;
    do
    {
        printf("How much change is owed?\n");
        float_change = get_float();
    }
    while(float_change < 0);
    float_change *= 100;
    int change = round(float_change);
    
    int coins = 0;
    
    while(change >= 25) 
    {
        change -= 25;
        coins++;
    }
    while(change >= 10)   
    {
        change -= 10;
        coins++;
    }
    while(change >= 5)
    {
        change -= 5;
        coins++;
    }
    while(change >= 1)
    {
        change -= 1;
        coins++;
    }
    printf("%i\n", coins);
}