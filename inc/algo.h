/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tor <tor@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:55:40 by tor               #+#    #+#             */
/*   Updated: 2021/09/13 16:26:49 by tor              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGO_H

# define ALGO_H

int	ft_median(t_int_table *to_check);
int	ft_max(t_int_table *to_check);
int	ft_min(t_int_table *to_check);
int	is_bigger(int first, int next);
int	is_bigger_than_med(int to_compare, int med);
int	is_ascending(t_int_table *to_check);
int	is_descending(t_int_table *to_check);
int	is_sorted_in_circle_decres(t_int_table *to_check);
int	is_sorted_in_circle_cres(t_int_table *to_check);
void	sorting_a(t_push_swap *main);

typedef enum	e_mvt
{
	PA,
	PB,
	SA,
	SB,
	SS,
	RA,
	RB,
	RR,
	RRA,
	RRB,
	RRR
}				t_mvt;

#endif