/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iokuno <iokuno@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:04:46 by iokuno            #+#    #+#             */
/*   Updated: 2025/10/31 14:35:13 by iokuno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <unistd.h>

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

int	main(int ac, char **av)
{
	if (ac != 5 && ac != 6)
		return (usage_mes());
	
	return (EXIT_SUCCESS);
}
