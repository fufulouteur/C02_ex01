#include <stdio.h>

char  *ft_strcpy(char *dest, char *src)
{
  char *dest_forward;

  dest_forward = dest;
  while(*src != '\0')
  {
    *dest_forward = *src;
    dest_forward++;
    src++;
  }

  return dest;
}
