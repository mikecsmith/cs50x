#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
  //Prompt user for their name and store it in variable name
  string name = get_string();
  
  //True or false storage variables
  int space;
  
  //Checks to make sure the value of name is not null
  if (name != NULL)
  {
    //Gets the length of a users name, including spaces and iterates over the users name
    for (int i = 0, n = strlen(name); i < n; i++)
    {
      //Checks to see if the first character
      if (i == 0 && name[0] != ' ')
      {
        printf("%c", toupper(name[0]));
      }
      else if (name[i] == ' ')
      {
        space = 1;
      }
      else if (space == 1 && name[i] != ' ')
      {
        printf("%c", toupper(name[i]));
        space = 0;
      }

    }
    printf("\n");
  }
}