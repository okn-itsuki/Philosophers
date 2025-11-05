/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iokuno <iokuno@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:04:46 by iokuno            #+#    #+#             */
/*   Updated: 2025/11/05 18:51:46 by iokuno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	init_ctx(int ac, char **av, t_ctx *ctx)
{
	ctx->ac = ac;
	ctx->av = av;
}

int	main(int ac, char **av)
{
	t_ctx	ctx;

	if (ac != 5 && ac != 6)
		return (usage_mes());
	init_ctx(ac, av, &ctx);
	return (EXIT_SUCCESS);
}
