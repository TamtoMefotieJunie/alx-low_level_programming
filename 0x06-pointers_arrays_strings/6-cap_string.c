#include "main.h"

/**
 * cap_string: capitalizes all the words of a string
 *
 * @str: pointer to character
 * Return: char 
 */

char *cap_string(char *str)
{
 for(i = 0; str[i] != '\0'; i++)
 {
  if(i == 0)
  {
   if((str[i] >= 'a' && str[i] <= 'z'))
    str[i] = str[i] - 32;
   continue; 
  }
  if(str[i] == ' ')
  {
   ++i;
   if(str[i] >= 'a' && str[i] <= 'z')
   {
    str[i] = str[i] - 32;
    continue; 
   }
  }
  else
  {
   if(str[i] >= 'A' && str[i] <= 'Z')
    str[i] = str[i] + 32; 
  }
 }
 
 return (str);
}
