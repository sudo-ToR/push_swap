/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tor <tor@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:55:40 by tor               #+#    #+#             */
/*   Updated: 2021/09/30 19:43:45 by tor              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGO_H

# define ALGO_H

int		ft_median(t_int_table *to_check);
int		ft_max(t_int_table *to_check);
int		ft_min(t_int_table *to_check);
int		is_bigger(int first, int next);
int		is_bigger_than_med(int to_compare, int med);
int		is_ascending(t_int_table *to_check);
int		is_descending(t_int_table *to_check);
int		is_sorted_in_circle_decres(t_int_table *to_check);
int		is_sorted_in_circle_cres(t_int_table *to_check);
void	sorting_a(t_push_swap *main);
void	insert_int_table(t_int_table *to_realloc, int index, int to_add);
void	add_mvt_to_lst(t_push_swap *main, int mvt_to_add);
void	exec_mvt_lst(t_push_swap *main);

#endif