#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
  //Checks for the correct number of commandline arguments, returns an error message and an error return value if not
  if (argc != 2 )
  {
    printf("Usage: ./caesar k\n");
    return 1;
  }

  int k = atoi(argv[1]) % 26;
  
  if (k <= 0)
  {
    printf("k must be a positive integer and not a power of 26\n");
    return 1;
  }
  
  //Prompts the user for a string to encipher
  printf("plaintext: ");
  string s = get_string();
  
  //Checks to make sure s is not null.
  if (s != NULL)
  {
    //Loops over plain_text after getting the length of s.
    for(int i = 0, n = strlen(s); i < n; i++)
    {
      //If the current character is not a letter, continue the loop.
      if (!isalpha(s[i]))
      {
        continue;
      }
      
      //If adding k to current char will take it over Z or z (upper or lower respectively) wrap it around - mod k by the correct value to properly encipher.
      if ((isupper(s[i]) && s[i] + k >= 'Z') || (islower(s[i]) && s[i] + k >= 'z'))
      {
        s[i] -= 26 - k;
      }
      else
      {
        s[i] += k;
      }
    }
    printf("ciphertext: %s\n", s);
  }
  return 0;
}