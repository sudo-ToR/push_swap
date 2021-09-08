/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tor <tor@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:55:44 by marvin            #+#    #+#             */
/*   Updated: 2021/09/08 16:04:01 by tor              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURE_H

# define STRUCTURE_H

typedef struct s_stat
{
	int			min;
	int			max;
	int			med;
}				t_stat;

typedef struct s_push_swap
{
	int			*a;
	int			*b;
	size_t		len_a;
	size_t		len_b;
	int			depth_max;
	int			*mvt_to_apply;
	int			len_mvt;
	t_stat		stat;
}				t_push_swap;

#endif