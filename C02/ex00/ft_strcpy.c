/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglinski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:34:30 by aglinski          #+#    #+#             */
/*   Updated: 2024/02/16 13:34:34 by aglinski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)

{
	int	i;

	i = 0;
	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = *src;
	return (dest);
}

/* int main()
{
	char src[] = "Salam";
	char dest[1];

	ft_strcpy(dest, src);
	write(1, dest, 5);
	return 0;
} */