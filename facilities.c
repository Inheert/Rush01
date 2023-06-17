/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   facilities.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:45:45 by tclaereb          #+#    #+#             */
/*   Updated: 2023/06/17 17:52:33 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c ,1);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

void	ft_error(void)
{
	int		i;
	char	str[5];

	ft_strcpy(str, "Error");
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	is_in_range(char c, int start, int end)
{
	if (c >= start && c <= end)
		return (1);
	return (0);
}

int	table_len(int *ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
		i++;
	return (i);
}
