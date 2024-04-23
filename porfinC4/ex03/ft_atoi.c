/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglinski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:44:01 by aglinski          #+#    #+#             */
/*   Updated: 2024/02/23 14:44:02 by aglinski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	numminus;

	i = 0;
	num = 0;
	numminus = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			numminus++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i++] - '0');
	}
	if (numminus % 2 == 1)
		return (num * -1);
	return (num);
}

/*int	main(void)
{
	char str[] = "   -42";
	int result = ft_atoi(str);
	write(1, "The result is: ", 15);
	if (result < 0)
	{
		write(1, "-", 1);
		result *= -1;
	}
	if (result == 0)
		write(1, "0", 1);
	while (result > 0)
	{
		char digit = result % 10 + '0';
		write(1, &digit, 1);
		result /= 10;
	}
	write(1, "\n", 1);
	return (0);
} */