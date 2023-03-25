/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihovhann <ihovhann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:50:47 by ihovhann          #+#    #+#             */
/*   Updated: 2022/07/27 14:50:48 by ihovhann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/philo.h"

int	main(int argc, char **argv)
{
	t_state	state;
	t_philo	**philo;

	if (argc < 5 || argc > 6)
	{
		printf ("Argument Error");
	}
	else
	{
		if (check_arguments(argc, argv) == 1)
		{
			init_args(argc, argv, &state);
			philo = init_philo(&state);
			if (philo == 0)
				return (0);
			manipulate_threads(philo, &state);
		}
	}
	return (0);
}
