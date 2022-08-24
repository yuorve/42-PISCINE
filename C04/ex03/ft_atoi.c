#include <stdio.h>

int ft_atoi (char *str)
{
	int	i;
	int	number;
	int	negative;
    
	i = 0;
	number = 0;
	negative = 1;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			number = number * 10 + (str[i] - '0');
		}
		else if (str[i] == '-')
			negative = -negative;
		else if (str[i] == '+')
			negative = +negative;
		else if (str[i] != ' ')
			return (negative *  number);
		i++;
	}
	return (negative * number);
}

int	main(void)
{
	int n;
    
	n = ft_atoi("   --+-1234ab567");
	printf("El resultado: %d", n);
}
