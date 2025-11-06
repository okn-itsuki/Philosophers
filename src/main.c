/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iokuno <iokuno@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:04:46 by iokuno            #+#    #+#             */
/*   Updated: 2025/11/06 16:45:03 by iokuno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, const char **av)
{
	t_ctx	ctx;

	if (is_valid_arg(ac, av))
		return (usage_mes());
	if (init_ctx(ac, av, &ctx))
		return (EXIT_FAILURE);
	ran_philo(&ctx);
	return (EXIT_SUCCESS);
}
