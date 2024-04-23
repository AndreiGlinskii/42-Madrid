/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglinski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 12:28:12 by aglinski          #+#    #+#             */
/*   Updated: 2024/02/27 12:28:14 by aglinski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str++, 1);
	}
	return (*str);
}

int	main(int i, char **str)
{
	i = 0;
	while (*str != '\0')
	{
		write (1, str, ft_putstr(*str));
		write (1, "\n", 1);
		str++;
	}
	return (0);
}
