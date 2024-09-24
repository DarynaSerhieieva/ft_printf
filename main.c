#include "./includes/ft_printf.h"
#include "./includes/libft.h"

int	main(void)
{
	//test for a single character.
	int	letter = 't';

	int size1 = ft_printf("Test for one letter: %c\n", letter);
	int size2 = printf("Test for one letter: %c\n", letter);
	if (size1 != size2)
	{
		printf("Something is wrong your result is: %d, but must be: %d\n", size1, size2);
		return (1);
	}
	printf("Result match your result is: %d and original: %d\n\n", size1, size2);

	//test for a string
	char	*str = "Hello world!";

	int size3 = ft_printf("Test for a string: %s\n", str);
	int size4 = printf("Test for a string: %s\n", str);
	if (size3 != size4)
	{
		printf("Something is wrong your result is: %d, but must be: %d\n", size3, size4);
		return (1);
	}
	printf("Result match your result is: %d and original: %d\n\n", size3, size4);

	//test for void * pointer argument has to be printed in hexadecimal format

	int size5 = ft_printf("Test for a pointer: %p\n", &str);
	int size6 = printf("Test for a pointer: %p\n", &str);
	if (size5 != size6)
	{
		printf("Something is wrong your result is: %d, but must be: %d\n", size5, size6);
		return (1);
	}
	printf("Result match your result is: %d and original: %d\n\n", size5, size6);

	//test for a decimal (base 10) number
	int	numb = 123456;

	int size7 = ft_printf("Test for a decimal: %d\n", numb);
	int size8 = printf("Test for a decimal: %d\n", numb);
	if (size7 != size8)
	{
		printf("Something is wrong your result is: %d, but must be: %d\n", size7, size8);
		return (1);
	}
	printf("Result match your result is: %d and original: %d\n\n", size7, size8);

	//test for an integer in base 10.
	int	numb2 = 56789;

	int size9 = ft_printf("Test for an integer: %i\n", numb2);
	int size10 = printf("Test for an integer: %i\n", numb2);
	if (size9 != size10)
	{
		printf("Something is wrong your result is: %d, but must be: %d\n", size9, size10);
		return (1);
	}
	printf("Result match your result is: %d and original: %d\n\n", size9, size10);

	//test for an unsigned decimal (base 10) number.
	int	numb3 = 4294967295;

	int size11 = ft_printf("Test for an unsigned decimal: %u\n", numb3);
	int size12 = printf("Test for an unsigned decimal: %u\n", numb3);
	if (size11 != size12)
	{
		printf("Something is wrong your result is: %d, but must be: %d\n", size11, size12);
		return (1);
	}
	printf("Result match your result is: %d and original: %d\n\n", size11, size12);

	//test for a number in hexadecimal (base 16) lowercase format.
	int	numb4 = 789534;

	int size13 = ft_printf("Test for a number in hexadecimal lowercase: %x\n", numb4);
	int size14 = printf("Test for a number in hexadecimal lowercase: %x\n", numb4);
	if (size13 != size14)
	{
		printf("Something is wrong your result is: %d, but must be: %d\n", size13, size14);
		return (1);
	}
	printf("Result match your result is: %d and original: %d\n\n", size13, size14);

	//test for a number in hexadecimal (base 16) uppercase format.

	int size15 = ft_printf("Test for a number in hexadecimal uppercase: %X\n", numb4);
	int size16 = printf("Test for a number in hexadecimal uppercase: %X\n", numb4);
	if (size15 != size16)
	{
		printf("Something is wrong your result is: %d, but must be: %d\n", size15, size16);
		return (1);
	}
	printf("Result match your result is: %d and original: %d\n\n", size15, size16);

	//test for a percent sign %.
	char	percent = '%';

	int size17 = ft_printf("Test for a percent sign: %x\n", percent);
	int size18 = printf("Test for a percent sign: %x\n", percent);
	if (size17 != size18)
	{
		printf("Something is wrong your result is: %d, but must be: %d\n", size17, size18);
		return (1);
	}
	printf("Result match your result is: %d and original: %d\n\n", size17, size18);

	//test for a multiple type of data

	int size19 = ft_printf("Number: %u, string: str %s, character: %c, variable: %p\n", numb2, str, letter, &str);
	int size20 = printf("Number: %u, string: str %s, character: %c, variable: %p\n", numb2, str, letter, &str);
	if (size19 != size20)
	{
		printf("Something is wrong your result is: %d, but must be: %d\n", size19, size20);
		return (1);
	}
	printf("Result match your result is: %d and original: %d\n\n", size19, size20);

	return (0);
}
