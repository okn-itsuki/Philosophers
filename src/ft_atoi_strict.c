/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_strict.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iokuno <iokuno@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:28:13 by iokuno            #+#    #+#             */
/*   Updated: 2025/11/06 16:44:11 by iokuno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_atoi_strict(const char *s)
{
	long	res;

	res = 0;
	if (!s || !*s)
		return (-1);
	while (*s)
	{
		res = res * 10 + (*s - '0');
		if (res > INT_MAX)
			return (-1);
		s++;
	}
	return (res);
}

int	ft_atoi_err(int n)
{
	if (n < 0)
	{
		usage_mes();
		return (EXIT_FAILURE);
	}
	else
		return (EXIT_SUCCESS);
}
