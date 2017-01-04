#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long long card_number;
    do 
    {
        printf("Number: ");
        card_number = get_long_long();
    }
    while(card_number < 0);
    
    //Checks to see if the card number is above 16 digits and returns invalid if it is.
    if(card_number < 1000000000000 || card_number > 9999999999999999)
    {
        printf("INVALID\n");
        return 0;
    }
    
    //Modulus Value
    long long m = 100;
    long long n = 10;
    
    //Modulus Divisor Value
    long long d = 10;
    long long e = 1;
    
    //Overall Value
    int v = 0;
    
    //Storage Variables
    int a;
    int x;
    int y;
    int z;
    
    //Loops through the card number, up to a maximum of 8 times (for a 16 digit card number).
    for(int i = 0; i < 8; i++)
    {
        a = (card_number % n) / e;
        
        //On the first iteration this grabs the value of the second to last digit and multiplies it by 2.
        x = ((card_number % m) / d) * 2;
        
        //This block takes the value of x and splits it into its two separate digits - for single digit numbers z will equal 0. 
        y = x % 10;
        z = (x % 100) / 10;
        
        //Adds v to itself plus the values of y and z.
        v = v + a + y + z;
        
        //On each passthrough of the loop this increases the modulus and divisor by the correct amount to get the right return value.
        m = m * 100;
        n = n * 100;
        d = d * 100;
        e = e * 100;
    }
    
    //Final Checks
    if( v % 10 == 0 && ((card_number >= 340000000000000 && card_number < 350000000000000) || (card_number >= 370000000000000 && card_number < 380000000000000))) 
    {
        printf("AMEX\n");
    }
    else if( v % 10 == 0 && (card_number >= 5100000000000000 && card_number < 5600000000000000))
    {
        printf("MASTERCARD\n");
    }
    else if( v % 10 == 0 && ((card_number >= 4000000000000 && card_number < 5000000000000) || (card_number >= 4000000000000000 && card_number < 5000000000000000)))
    {
        printf("VISA\n");
    }
    else 
    {
        printf("INVALID\n");
    }
}