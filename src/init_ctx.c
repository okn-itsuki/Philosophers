/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_ctx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iokuno <iokuno@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 09:50:05 by iokuno            #+#    #+#             */
/*   Updated: 2025/11/06 16:46:49 by iokuno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	init_ctx(int ac, char **av, t_ctx *ctx)
{
	ctx->n = ft_atoi_strict(av[1]);
	ctx->t_die = ft_atoi_strict(av[2]);
	ctx->t_eat = ft_atoi_strict(av[3]);
	ctx->t_sleep = ft_atoi_strict(av[4]);
	if (ac == 5)
		ctx->must_eat = ft_atoi_strict(av[5]);

	
}
