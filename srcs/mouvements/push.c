/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tor <tor@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:52:05 by marvin            #+#    #+#             */
/*   Updated: 2021/12/05 11:51:54 by tor              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_push_swap *main)
{
	if (!main->a->len)
		return ;
	(main->b->len)++;
	down_one(main->b);
	(main->b->table)[0] = (main->a->table)[0];
	up_one(main->a);
	main->a->len--;
	printf("pb\n");
}

void	push_a(t_push_swap *main)
{
	if (!main->b->len)
		return ;
	main->a->len++;
	down_one(main->a);
	(main->a->table)[0] = (main->b->table)[0];
	up_one(main->b);
	main->b->len--;
	printf("pa\n");
}
