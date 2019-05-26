#include <strings.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void 	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);

int main()
{
  char *s; // Creates a pointer to a char
  char *p; // Creates a pointer to a char
  if(!(s=(char *)malloc(6)))
	  return (0);
  if(!(p=(char *)malloc(3)))
	  return 0; // Allocates 6 bytes of memory and sets s to point at them
  printf("s contains the address %p\n",s);
  printf("\n");
  ft_memcpy(s,"Hello",5); // Copies "Hello" into the 6 bytes of memory
  printf("Before: %s\n",s);
  ft_memmove(p, s, 6);
  printf("p after mmove of s: %s\n", p);
  printf("After mmove s is: %s\n",s);
  bzero(s, 5);
  printf("After bzero: %s\n",s);
  memset(s, 'v', 3);
  printf("After memset: %s\n",s);
  ft_memcpy(s,"Hello", 7); // Copies "Hello" into the 6 bytes of memory
  printf("After ft_memcpy: %s\n",s);
  ft_bzero(s, 5);
  printf("After ft_bzero: %s\n", s);
  ft_memset(s, 'v', 3); 
  printf("After ft_memset: %s\n", s);
}
