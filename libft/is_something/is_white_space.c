/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_white_space.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoirot <lnoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 17:15:43 by lnoirot           #+#    #+#             */
/*   Updated: 2021/08/20 17:16:05 by lnoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	is_white_space(char c)
{
	if (c == ' ' || c == '\f' || c == '\t' || c == '\n' || c == '\r'
		|| c == '\v')
		return (1);
	return (0);
}
