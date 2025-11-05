/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usase_mes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iokuno <iokuno@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:48:29 by iokuno            #+#    #+#             */
/*   Updated: 2025/11/05 18:52:35 by iokuno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	usage_mes(void)
{
	printf("usage : This program must take the following arguments:\n");
	printf("\tnumber_of_philosophers\n");
	printf("\ttime_to_die\n");
	printf("\ttime_to_eat\n");
	printf("\ttime_to_sleep\n");
	printf("\t[number_of_times_each_philosopher_must_eat]\n");
	return (EXIT_FAILURE);
}
