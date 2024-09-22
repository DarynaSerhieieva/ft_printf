#include "libft.h"

void	ft_printstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_printstr(str[i]);
		i++;
	}
}
