/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-fari <rde-fari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 11:19:21 by rde-fari          #+#    #+#             */
/*   Updated: 2024/11/28 15:37:03 by rde-fari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

//=====================================| Colors |
# define Red "\033[31m"
# define Green "\033[32m"
# define Orange "\033[38;5;208m"
# define Purple "\e[35m"
# define Yellow "\033[33m"
# define Cyan "\033[36m"
# define Reset "\033[0m"

//=====================================| Libraries |
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <pthread.h>
# include <sys/time.h>
# include <stdio.h>
# include "../libft/libft.h"

//=====================================| Structs |
typedef struct s_table
{

}				t_table;

typedef struct s_philo
{
	int			philo_id;
	long		time_to_eat;
	long		time_to_think;
	long		time_to_die;
	t_table		*table;
}				t_philo;

//=====================================| Functions / archive |


#endif