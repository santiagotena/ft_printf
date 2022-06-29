#include "ft_printf.h"

// ft_strlen

size_t	ft_strlen(const char *str)
{
	size_t		counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter += 1;
	}
	return (counter);
}

// ft_itoa

int	ft_int_length(int x)
{
	int		index;

	index = 0;
	if (x == 0)
		return (1);
	while (x != 0)
	{
		x /= 10;
		index++;
	}
	return (index);
}

char	*ft_char_output(int length, int minus, char *output, int n)
{
	while (length + minus >= 0)
	{
		output[length + minus] = n % 10 + '0';
		n = n / 10;
		if (length == 0 && minus == 1)
		{
			output[0] = '-';
			break ;
		}
		length--;
	}
	return (output);
}

/**
 * @brief Allocates (with malloc(3)) and returns a string representing the 
 * integer received as an argument. Negative numbers must be handled.
 * 
 * Returns the string representing the integer. NULL if the allocation fails.
 * 
 * @param n 
 * @return char* 
 */
char	*ft_itoa(int n)
{
	char	*output;
	int		minus;
	int		length;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	minus = 0;
	if (n < 0)
	{
		minus = 1;
		n = n * -1;
	}
	length = ft_int_length(n);
	output = (char *) malloc((length + minus + 1) * sizeof(char));
	if (!output)
		return (NULL);
	output[length + minus] = '\0';
	length--;
	output = ft_char_output(length, minus, output, n);
	return (output);
}

/**
 * @brief Allocates sufficient memory for a copy of the string s1, does the 
 * copy, and returns a pointer to it.  The pointer may subsequently be used 
 * as an argument to the function free(3).
 * 
 * @param s1 
 * @return char* 
 */
char	*ft_strdup(const char *s1)
{
	size_t	count;
	char	*output;
	size_t	index;

	index = 0;
	count = 0;
	while (s1[index] != '\0')
	{
		count++;
		index++;
	}
	output = (char *)malloc((count + 1) * sizeof(char));
	if (!output)
		return (NULL);
	index = 0;
	while (index < count)
	{
		output[index] = s1[index];
		index++;
	}
	output[index] = '\0';
	return (output);
}
