/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglinski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:13:26 by aglinski          #+#    #+#             */
/*   Updated: 2024/02/21 17:13:30 by aglinski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str == 127)
			return (0);
		str++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d", ft_str_is_printable("€"));
	printf("%d", ft_str_is_printable("a"));
	printf("%d", ft_str_is_printable("+-+++"));
	printf("%d", ft_str_is_printable(""));
	return 0;
} */

// while (*str)
	// {
	// 	if ((*str < 00 || *str > 31) && *str == 127)
	// 		return (0);
	// 	str++;
	// }
	// return (1);