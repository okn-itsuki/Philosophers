/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_ctx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iokuno <iokuno@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 09:50:05 by iokuno            #+#    #+#             */
/*   Updated: 2025/11/06 11:00:41 by iokuno           ###   ########.fr       */
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

void	init_ctx(int ac, char **av, t_ctx *ctx)
{
}
