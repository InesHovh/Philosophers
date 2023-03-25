/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihovhann <ihovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:49:22 by ihovhann          #+#    #+#             */
/*   Updated: 2022/07/27 14:49:23 by ihovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>
# include <unistd.h>
# include <sys/time.h>

typedef struct s_state
{
	int				phil_num;
	int				time_to_eat;
	int				time_to_die;
	int				time_to_sleep;
	int				num_eaten;
	pthread_mutex_t	*fork;
}				t_state;

typedef struct s_philo
{
	pthread_t		thread;
	int				id;
	int				eat_count;
	long long		last_meal;
	long long		born_time;
	int				right_fork;
	int				left_fork;
	int				is_dead;
	pthread_mutex_t	*printing;
	t_state			*state;
}					t_philo;

int			manipulate_threads(t_philo **philo, t_state *state);
int			check_arguments(int argc, char **argv);
void		init_args(int argc, char **argv, t_state *state);
// static int	ft_atoi(const char *str);
int			ft_atoi(const char *str);
int			error(int condition);
t_philo		**init_philo(t_state *state);
// void test_atoI();
void		*dead_checker(void *args);
long long	timeinterval(void);
void		wait_time(long long time, struct s_state *state);
void		print_action(t_philo *philo, char *str);
#endif
