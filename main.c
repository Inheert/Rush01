/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:23:07 by tclaereb          #+#    #+#             */
/*   Updated: 2023/06/17 15:53:36 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_error(void);
int	is_valid_args(char **args);
int	is_in_range(char c, int start, int end);
int	table_len(int *table);

int	*ft_atoi(char *arg, int *ptr)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(arg[i])
	{
		if (is_in_range(arg[i], 48, 57))
		{
			ptr[j] = arg[i] - 48;
			j++;
		}
		i++;
	}
	return (ptr);
}

int	args_valid(int *ptr)
{
	int	i;
	int	size;
	
	i = 0;
	size = table_len(ptr);
	while (i <= size / 4 - 1)
	{
		if (ptr[i] + ptr[i + 4] > 5)
			return (0);
		i++;
	}
	i = size - 1;
	while (i > size / 4 * 3 - 1)
	{
		if (ptr[i] + ptr[i - 4] > 5)
			return (0);
		i--;
	}
	return (1);
}

int	main(int nargs, char **args)
{
	int	*table;
	
	table = (int*) malloc(64);
	if (nargs != 2)
	{
		ft_error();
	}
	ft_atoi(args[1], table);	
	if (table_len(table) != 16)
	{
		ft_error();
	}
	if (!args_valid(table))
	{
		ft_error();
	}
	return (0);
}
