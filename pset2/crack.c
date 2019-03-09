#define _XOPEN_SOURCE

#include <cs50.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char** argv)
{
  //Check for the correct number of arguments and exit if incorrect
  if (argc != 2)
  {
    printf("Usage: ./crack hash\n");
    return 1;
  }
  
  char* hash = argv[1];
  char* password;
  
  //salt = (char*) malloc(3);
  password = (char*) malloc(3);
  strcpy(password, "aa");
  
  //Prints the hash - usable
  printf("Hash: %s\n", hash);
  
  const char* alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWYZ";
  
  int alphabet_length = strlen(alphabet);
  
  int i = 0, j = 0;
  do
  {
    password[j] = alphabet[i];

    printf("Password: %s\n", password);
    if (j == 3) {
      j = 0;
    }
    if (i == j)
    {
      j++;
    }
    if (i == alphabet_length)
    {
      i = 0;
    }
    i++;
  }
  while(strcmp(password, hash) != 0);
  printf("Found it\n");

  //for (char c = 'A'; c <= 'z'; c++)
  //{
  //  if (!isalpha(c))
  //  {
  //    continue;
  //  }
  //  password[0] = c;
  //  printf("Password: %s\n", password);
    
  //}
  
  
  //while(!strcmp(hash, crypt(password, salt)));
  
  return 0;
}