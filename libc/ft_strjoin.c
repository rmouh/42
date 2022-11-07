#include "libft.h"

size_t  ft_strlen(const char *s)
{
	size_t  len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}
void *ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;
    char *csrc;
    char *cdest;

    csrc = (char *)src;
    cdest = (char *)dest;
	i = 0;

	while (csrc[i] && i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	while (i < n)
	{
		cdest[i] = '\0';
		i++;
	}
	return (cdest);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *str;
    size_t  ls1;
    size_t  ls2;

    ls1 = ft_strlen(s1);
    ls2 = ft_strlen(s2);
    str = (char *)malloc(sizeof(char *) *(ls1 + ls2 + 1));
    if (!str || !s1 || !s2)
        return (NULL);
    ft_memcpy(str, s1, ls1);
    ft_memcpy(str + ls1, s2, ls2);
    str[ls1 + ls2 + 1] = '\0';
    return (str);
}

#include <string.h>
#include <stdio.h>
int main (void)
{
	char *csrc = "hhkdjsuksncxmn";
    char *csrc2 = ":::";

    // ft_memmove(csrc+3, csrc+2, 0);
    // memmove (csrc2+3, csrc2+2, 0);
    printf("%s\n", ft_strjoin(csrc,csrc2));
    printf("%s", ft_strjoin ("cd", "vxcs"));
    return 0;
}