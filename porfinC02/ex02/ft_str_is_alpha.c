/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglinski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:58:29 by aglinski          #+#    #+#             */
/*   Updated: 2024/02/21 14:58:33 by aglinski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
			return (0);
		str++;
	}
	return (1);
}

/*int main()
{
	char str1[] = "Que";
	char str2[] = "123";
	
	ft_str_is_alpha(str1);
	write(1, str1, 3);
	ft_str_is_alpha(str2);
	write(1, str2, 3);
	return 0;
} */

/*if (*str == '\0')
	return 1;

	while(*str != '\0' && *str < 'A' && *str > 'Z')
	{
		return 0;
	}
	while(*str !='\0' && *str < 'a' && *str > 'z')
{
	return 0;
	str++;
}
	return 1;*/