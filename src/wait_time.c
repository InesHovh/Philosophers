/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wait_time.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihovhann <ihovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:51:26 by ihovhann          #+#    #+#             */
/*   Updated: 2022/07/27 14:51:27 by ihovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

void	wait_time(long long time, struct s_state *state)
{
	long long	i;

	i = timeinterval();
	(void)state;
	while (true)
	{
		if ((timeinterval() - i) >= time)
			break ;
	}
}
