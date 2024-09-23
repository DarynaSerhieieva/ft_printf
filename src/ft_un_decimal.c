#include "libftprintf.h"
#include "libft.h"

static int
	count_size(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_unitoa(unsigned int num)
{
	char	*num_str;
	int		len;

	len = count_size(num);
	num_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!num_str)
		return (0);
	num_str[len] = '\0';
	while (num != 0)
	{
		num_str[len - 1] = num % 10 + 48;
		num = num / 10;
		len--;
	}
	return (num_str);

}

void	ft_un_decimal(unsigned int num, int *leng)
{
	char	*num_str;

	if (num == 0)
	{
		*leng += 1;
		ft_putchar('0');
	}
	num_str = ft_unitoa(num);
	*leng += ft_strlen(num_str);
	ft_putstr(num_str);
}
