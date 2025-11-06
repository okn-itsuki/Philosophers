/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iokuno <iokuno@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:47:39 by okunoitsuki       #+#    #+#             */
/*   Updated: 2025/11/06 16:44:54 by iokuno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include "libft.h"
# include <pthread.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/time.h>
# include <unistd.h>

typedef struct s_philo
{
	int				id;
	int				left_fork;
	int				right_fork;
	long long		last_meal;
	int				meals_eaten;
	pthread_t		thread;
}					t_philo;

typedef struct s_ctx
{
	int				n;
	int				t_die;
	int				t_eat;
	int				t_sleep;
	int				must_eat;
	long long		start_ms;
	int				stop;
	pthread_mutex_t	*forks;
	pthread_mutex_t	print_mtx;
	pthread_mutex_t	state_mtx;
	pthread_mutex_t	meal_mtx;
	t_philo			*philo;
}					t_ctx;

int					usage_mes(void);
int				init_ctx(int ac, char **av, t_ctx *ctx);
bool				is_valid_arg(int ac, char **av);
int					ft_atoi_strict(const char *s);
int					ft_atoi_err(int n);
#endif