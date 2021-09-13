/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouvements.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tor <tor@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:05:42 by marvin            #+#    #+#             */
/*   Updated: 2021/09/13 15:04:23 by tor              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOUVEMENTS_H

# define MOUVEMENTS_H

void	swap(char stack_name, t_int_table *stack);
void	swap_b(t_push_swap *main);
void	swap_a(t_push_swap *main);
void	d_swap(t_push_swap *main);
void	up_one(t_int_table *to_sort);
void	down_one(t_int_table *to_sort);
void	rotate(char stack_name, t_int_table *stack);
void	rotate_a(t_push_swap *main);
void	rotate_b(t_push_swap *main);
void	r_rotate(char stack_name, t_int_table *stack);
void	r_rotate_a(t_push_swap *main);
void	r_rotate_b(t_push_swap *main);
int		last_in_table(t_int_table *to_parse);

#endif