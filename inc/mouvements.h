/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouvements.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:05:42 by marvin            #+#    #+#             */
/*   Updated: 2021/08/26 15:15:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(char stack_name, int *stack);
void	d_swap(int *a, int *b);
void	up_one(int *stack, int size);
void	down_one(int *stack, int size);
void	rotate(char stack_name, int *stack, int size);
void	r_rotate(char stack_name, int *stack, int size);