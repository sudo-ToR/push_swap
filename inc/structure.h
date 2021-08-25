/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:55:44 by marvin            #+#    #+#             */
/*   Updated: 2021/08/21 19:35:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURE_H

# define STRUCTURE_H

typedef struct s_push_swap
{
	int			*a;
	int			*b;
	size_t		len_a;
	size_t		len_b;
	int			depth_max;
}				t_push_swap;

#endif