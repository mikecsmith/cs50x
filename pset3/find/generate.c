/**
 * generate.c
 *
 * Generates pseudorandom numbers in [0,MAX), one per line.
 *
 * Usage: generate n [s]
 *
 * where n is number of pseudorandom numbers to print
 * and s is an optional seed
 */
 
#define _XOPEN_SOURCE

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// upper limit on range of integers that can be generated
#define LIMIT 65536

int main(int argc, string argv[])
{
    // if the number of arguments sent to argc is not 2 and not 3, exit with return 1
    if (argc != 2 && argc != 3)
    {
        printf("Usage: ./generate n [s]\n");
        return 1;
    }

    // convert string value of argv[1] to an integer and store it in n
    int n = atoi(argv[1]);

    // if there are 3 arguments, convert argv[2] to an integer and pass it to srand48
    // else pass in the current time in seconds
    if (argc == 3)
    {
        srand48((long) atoi(argv[2]));
    }
    else
    {
        srand48((long) time(NULL));
    }

    /* 
     * loop through n times, using drand48 to generate a double with a value between 0.0 and 1.0
     * then multiples that number by limit and converts to an int - printing the final value with
     * a newline character
    */ 
    
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", (int) (drand48() * LIMIT));
    }

    // success
    return 0;
}
