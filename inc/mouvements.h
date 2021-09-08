/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouvements.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tor <tor@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:05:42 by marvin            #+#    #+#             */
/*   Updated: 2021/09/08 16:04:29 by tor              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOUVEMENTS_H

# define MOUVEMENTS_H

void	swap(char stack_name, int *stack, int len);
void	swap_b(t_push_swap *main);
void	swap_a(t_push_swap *main);
void	d_swap(t_push_swap *main);
void	up_one(int *stack, int size);
void	down_one(int *stack, int size);
void	rotate(char stack_name, int *stack, int size);
void	rotate_a(t_push_swap *main);
void	rotate_b(t_push_swap *main);
void	r_rotate(char stack_name, int *stack, int size);
void	r_rotate_a(t_push_swap *main);
void	r_rotate_b(t_push_swap *main);

#endif