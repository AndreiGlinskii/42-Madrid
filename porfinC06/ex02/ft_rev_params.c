/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglinski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:12:48 by aglinski          #+#    #+#             */
/*   Updated: 2024/02/27 15:12:52 by aglinski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_stren(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	main(int ac, char *argv[])
{
	int	i;

	i = ac - 1;
	while (i > 0)
	{
		write(1, argv[i], ft_stren(argv[i]));
		write (1, "\n", 1);
		i--;
	}
	return (0);
}
