#include <stdio.h>
void ft_putstr(char *str);
char  *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
  char str[] = "coucou\n\0";
  char str2[] = "\0\0\0\0\0\0\0\0\0";
  printf("1.%s\n");
  ft_putstr(str2);
  ft_strcpy(str2, str, str);
  printf("2.%s\n");
  ft_putstr(str2);
  return (0);
}
