/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tor <tor@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:55:44 by marvin            #+#    #+#             */
/*   Updated: 2021/09/13 15:09:32 by tor              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURE_H

# define STRUCTURE_H

typedef struct	s_int_table
{
	int	*table;
	int len;
}				t_int_table;

typedef struct s_stat
{
	int			min;
	int			max;
	int			med;
}				t_stat;

typedef struct s_push_swap
{
	t_int_table	*a;
	t_int_table	*b;
	int			depth_max;
	t_stat		a_stat;
	t_stat		b_stat;
}				t_push_swap;

#endif