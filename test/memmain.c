#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void 	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);

int main()
{
  char *s; // Creates a pointer to a char
  if(!(s=(char *)malloc(6)))
	  return 0; // Allocates 6 bytes of memory and sets s to point at them
  printf("s contains the address %p\n",s);
  strcpy(s,"Hello"); // Copies "Hello" into the 6 bytes of memory
  printf("Before:  %s\n",s);
  bzero(s, 5);
  printf("After bzero: %s\n",s);
  memset(s, 'v', 3);
  printf("After memset: %s\n",s);
  strcpy(s,"Hello"); // Copies "Hello" into the 6 bytes of memory
  printf("After strcpy %s\n",s);
  ft_bzero(s, 5);
  printf("After ft_bzero: %s\n", s);
  ft_memset(s, 'v', 3); 
  printf("After ft_memset: %s\n", s);
}
