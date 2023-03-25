/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_action.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihovhann <ihovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:51:02 by ihovhann          #+#    #+#             */
/*   Updated: 2022/07/27 14:51:03 by ihovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

void	print_action(t_philo *philo, char *str)
{
	pthread_mutex_lock(philo->printing);
	printf("%lld %d %s\n", \
			timeinterval() - philo->born_time, philo->id + 1, str);
	pthread_mutex_unlock(philo->printing);
}
