

#include <stdio.h>
#include <unistd.h>
#include "libft.h"

// size_t	ft_strlen(const char *s)
// {
// 	size_t l;

// 	l = 0;
// 	while (s[l])
// 		l++;
// 	return (l);
// }


int main(int ac, char **av)
{
//    (void) ac;
//   (void) av;

//    char stt[25] = "ABCsdfsdfsdfHdsdf  #$$aS";
 //   char c = '1';
 //   char d = ' ';
	
		int a = ft_isalpha(15);

 //   printf("%s\n", stt);
    printf("%u\n", a);
 //   printf("%c\n", ft_isalnum(d));
    return (0);
}