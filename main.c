#include <stdint.h>
#include <stdio.h>
#include <string.h>
int ft_strlen(char *str);
void ft_putstr(char *str);
char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void) {
  char str[] = "hello world\n\0";
  char str2[] = "\0\0\0\0\0\0\0\0\0\0\0\n";
  ft_putstr(ft_strncpy(str2, str, 19));
  ft_putstr(str2);
  return (0);
}
