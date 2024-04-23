/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglinski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:06:27 by aglinski          #+#    #+#             */
/*   Updated: 2024/02/21 17:06:29 by aglinski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
			return (0);
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d", ft_str_is_uppercase("aaaaaaaaaA"));
// 	printf("%d", ft_str_is_uppercase("a"));
// 	printf("%d", ft_str_is_uppercase("+-+++"));
// 	printf("%d", ft_str_is_uppercase(""));
// 	return 0;
// }