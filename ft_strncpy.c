#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n) {
  char *dest_forward;

  dest_forward = dest;
  while (n != 0 && *src != '\0') {
    *dest_forward = *src;
    dest_forward++;
    src++;
    n--;
  }

  while (n != 0) {
    *dest_forward = '\0';
    n--;
  }
  return dest;
}
