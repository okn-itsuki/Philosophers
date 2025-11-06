/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iokuno <iokuno@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 09:47:36 by iokuno            #+#    #+#             */
/*   Updated: 2025/11/06 11:00:34 by iokuno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

bool	is_valid_arg(int ac, char **av)
{
	int	i;
	int	j;

	if (ac != 5 && ac != 6)
		return (true);
	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (!ft_isdigit((int)av[i][j]))
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}
