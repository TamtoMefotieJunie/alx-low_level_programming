#include "main.h"

/**
 * _strcmp- function that compares two strings
 *
 * @s1: pointer to first string character
 * @s2: pointer to second string character
 */

int _strcmp(char *s1, char *s2)
{
    int i = 0;
    int chk = 0;
    while(str1[i] != '\0' || str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            chk = 1;
            break;
        }
        i++;
    }
    if(chk == 0)
    {
        printf("\nStrings are Equal");
    }
    else
    { 
        printf("\n strings are not Equal");
    }
} 
