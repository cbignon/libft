
#include "libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
	char dest[30] = "vas y copie bordel";
	char src[] = "";
	unsigned int dstsize = 9;

	printf(" la mienne: %lu\n", (ft_strlcpy(dest, src, dstsize)));
	printf("%s\n", dest);
	printf(" la vraie: %lu\n", (strlcpy(dest, src, dstsize)));
	printf("%s\n", dest);
	return 0;
}
