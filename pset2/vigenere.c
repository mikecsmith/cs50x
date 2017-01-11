#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
  if (argc != 2)
  {
    printf("Usage: ./vigenere k\n");
    return 1;
  }
  
  //Assigns argv[1] to a string called k (short for key)
  char* k = argv[1];
  
  //Gets the string length of k and assigns it's number to int variable n
  int n = strlen(k);
  
  //Loops through k and converts each character to the correct number for a vigenere cipher, exits the program if input is not alpha
  for(int i = 0; i < n; i++)
  {
    if (isupper(k[i]))
    {
      k[i] = (k[i] - 'A') % 26;
    }
    else if (islower(k[i]))
    {
      k[i] = (k[i] - 'a') % 26;
    }
    else
    {
      printf("Usage: ./vigenere k\nNote: k must comprise of letters only\n");
      return 1;
    }
  }

  //Prompts the user for a string to encipher
  printf("plaintext: ");
  char* s = get_string();
  
  //Checks to make sure s is not null.
  if (s != NULL)
  {
    //Loops over s after getting the length of s, also assigns a counter variable j.
    for(int i = 0, j = 0, o = strlen(s); i < o; i++)
    {
      //If the current character is not a letter, continue the loop.
      if (!isalpha(s[i]))
      {
        continue;
      }
      
      //If counter variable j equals the string length of k (assigned to n) reset j to 0
      if (j == n)
      {
        j = 0;
      }

      //If adding k to current char will take it over Z or z (upper or lower respectively) wrap it around
      if ((isupper(s[i]) && s[i] + k[j] >= 'Z') || (islower(s[i]) && s[i] + k[j] >= 'z'))
      {
        s[i] -= 26 - k[j];
      }
      else
      {
        s[i] += k[j];
      }
      //Increment j
      j++;
    }
    printf("ciphertext: %s\n", s);
  }
}
