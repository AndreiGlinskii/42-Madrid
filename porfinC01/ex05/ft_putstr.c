/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglinski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:28:53 by aglinski          #+#    #+#             */
/*   Updated: 2024/02/14 17:28:54 by aglinski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)

{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

/*int main(void)

{
    char que[] = "Hello mir";
    ft_putstr(que);
    return 0;
}*/