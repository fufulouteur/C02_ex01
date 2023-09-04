#include <stdio.h>
void ft_putstr(char *str);
char  *ft_strcpy(char *dest, char *src);

int main(void)
{
  char str[] = "hello world\n\0";
  char str2[] = "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
  ft_putstr(ft_strcpy(str2, str));
  ft_putstr(str2);
  return (0);
}
