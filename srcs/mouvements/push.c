/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:52:05 by marvin            #+#    #+#             */
/*   Updated: 2021/08/25 15:29:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_push_swap *main)
{
	if (!main->len_a)
		return ;
	main->len_b++;
	down_one(main->b, main->len_b);
	main->b[0] = main->a[0];
	up_one(main->a, main->len_a);
	main->len_a--;
	printf("pb\n");
}

void	push_a(t_push_swap *main)
{
	if (!main->len_b)
		return ;
	main->len_a++;
	down_one(main->a, main->len_a);
	main->a[0] = main->b[0];
	up_one(main->b, main->len_b);
	main->len_b--;
	printf("pa\n");
}