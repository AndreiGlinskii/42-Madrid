/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglinski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 12:33:05 by aglinski          #+#    #+#             */
/*   Updated: 2024/02/27 12:33:07 by aglinski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char *argv[])
{
	int	i;

	i = 1;
	while (i < ac)
	{
		write (1, argv[i], ft_strlen(argv[i]));
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
