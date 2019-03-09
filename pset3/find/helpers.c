/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>
#include <stdio.h>

#include "helpers.h"

void swap(int x, int y);
/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    if (n <= 0)
    {
        return false;
    }

    
    /*
    for (int i = 0; i < n; i++)
    {
        if (values[i] == value)
        {
           return true; 
        }
    }
    */
    
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    
    //INSERTION SORT
    /*
    Call the first element of the array "sorted"
    Repeat until all elements in the array are sorted:
        Look at the next unsorted element. Insert into the sorted portion by shifting the requisite number of elements
    */
    
    //Iterate over the values array, stopping 1 position before the end
    for(int j = 1; j < n; j++)
    {
        int key = values[j];
        int i = j - 1;
        
        while(i >= 0 && values[i] > key)
        {
            values[i + 1] = values[i];
            i = i - 1;
            values[i + 1] = key;
        }
        //printf("%i\n", i);
        //If the value to the right is less than the value to the left, shift it
        /*
        if(values[i + 1] < values[i])
        {
            printf("true\n");
            for(int j = 0; j < i; j++)
            {
                if(values[i] < values[j])
                {
                    printf("continuing %i\n", j);
                    continue;
                }
                //Buggered up bit
                int temp = values[j];
                values[j] = values[i];
                values[j + 1] = temp;
            }
            printf("\n");
        }
        */
        
    }
    
    
    
    //BUBBLE SORT
    /*
    Set swap counter to a non-zero value
    Repeat until the swap counter is zero
        reset swap counter to zero
        look at each adjacent pair
        if the two elements are not in order, swap them and add 1 to to the swap counter
    
    
    //Sets initial swap counter to a non-zero value
    int swap_counter = -1;
    
    //Sets initial number of sorted elements to 1 (as this will be value at the end of the first pass)
    int num_sorted = 1;
    
    //While the swap counter does not equal zero, set the swap counter to zero and iterate over the values array
    while(swap_counter != 0)
    {
        swap_counter = 0;
        //Iterate over the values array, stopping once you reach the sorted elements
        for (int i = 0; i < n - num_sorted; i++)
        {
            //If the value of an item on the left is greater than an item on the right, swap them and increase the swap counter
            if(values[i] > values[i + 1])
            {
                int temp = values[i];
                values[i] = values[i + 1];
                values[i + 1] = temp;
                swap_counter++;
            }
        }
        //Increase the number of sorted elements by 1 - for optimisation only
        num_sorted++;
    }
    */
    

    
    /* SELECTION SORT
    //Start at 0 and iterate up to n - 1
    for(int i = 0; i < n - 1; i++)
    {
        
        //Sets a variable minimum to equal i - this is so as not to overwrite i later
        int minimum = i;
        
        //For all positions in the values array greater than i
        //iterate over them and check to see if values[minimum] is
        //greater than values[j].
        
        for(int j = i + 1; j < n; j++)
        {
            if(values[minimum] > values[j])
            {
                //If values[min] is greater, replace min with j.
                minimum = j;
            }
        }
        
        //Store the value of values[i] in a temporary variable
        int temp = values[i];
        
        //Replace the value in values[i] with the minimum value
        values[i] = values[minimum];
        
        //Replace whatever was at the minimum values memory space with whatever was previously at values[i]
        values[minimum] = temp;
    }
    */
    
    //Code block to print list of sorted numbers
    for(int k = 0; k < n; k++)
    {
        printf("%i, ", values[k]);
    }
    
    return;
}
