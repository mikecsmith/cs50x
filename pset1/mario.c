#include <cs50.h>
#include <stdio.h>

void mprint(char c, int n);

int main(void)
{
    int n;
    do 
    {
        printf("Height: ");
        n = get_int();
    }
    while(n < 0 || n > 23);
    
    int spaces = n - 1;
    int hashes = 1;
    
    for(int i = 0; i < n; i++)
    {
        mprint(' ', spaces);
        mprint('#', hashes);
        printf("  ");
        mprint('#', hashes);
        printf("\n");
        hashes++;
        spaces--;
    }
}

void mprint(char c, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%c", c);
    }
}