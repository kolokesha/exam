#include <stdlib.h>

char    *ft_itoa(int nbr)
{
	int        len;
	long    n;
	char    *str;

	if (nbr == -2147483648)
		return ("-2147483648");
	len = 0;
	n = nbr;
	while (n)
	{
		n /= 10;
			len += 1;
	}
	if (nbr < 0)
	{
		len += 1;
		nbr *= -1;
	}
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	str[len] ='\0';
	while (nbr)
	{
		str[len] = (n % 10) + '0';
		nbr /= 10;
	}	
	return (str);
}
int	main(void)
{
		int i = 0;
		int tab[5] = {-2147483648, -42, 0, 42, 2147483647};

		while (i < 5)
			printf("%s\n", ft_itoa(tab[i++]));
		
		return 0;
}
