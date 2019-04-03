#include <stdlib.h>
#define	LEN 	42

int	main()
{
	int i;
	char *str;

	str = (char*)malloc(sizeof(*str) * (LEN * 1));
	i = 0;
	while (i < LEN)
	{
		str[i] = '0' + (i % 10);
		i++;
	}
	str[i] = '\0';
	free(str);
	return (0); 
}
