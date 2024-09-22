#include "./includes/libftprintf.h"
#include "./includes/libft.h"

int	main(void)
{
	int	test_int = 't';
	int	size;
	int	size2;
	char	*test_char = "this is a test line";

	size = ft_printf("I want to test my code %c,\n and also: %s\n", test_int, test_char);
	size2 = printf("I want to test my code %c,\n and also: %s\n", test_int, test_char);
	printf("this is the size of text abow: %d\n", size);
	printf("this is the size of text abow: %d\n", size2);
	return (0);
}
