/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okunoitsuki <okunoitsuki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:04:46 by iokuno            #+#    #+#             */
/*   Updated: 2025/11/05 14:56:06 by okunoitsuki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int usage_mes(void)
{
	printf("usage : This program must take the following arguments:\n");
	printf("\tnumber_of_philosophers\n");
	printf("\ttime_to_die\n");
	printf("\ttime_to_eat\n");
	printf("\ttime_to_sleep\n");
	printf("\t[number_of_times_each_philosopher_must_eat]\n");
	return (EXIT_FAILURE);
}

void init_ctx(t_philo *philo, char **av, int ac)
{
	philo->av = av;
	philo->ac = ac;
}

int main(int ac, char **av)
{
	t_philo philo;

	if (ac != 5 && ac != 6)
		return (usage_mes());
	init_ctx(&philo, av, ac);
	return (EXIT_SUCCESS);
}
