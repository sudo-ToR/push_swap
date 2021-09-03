/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tor <tor@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:55:40 by tor               #+#    #+#             */
/*   Updated: 2021/09/03 14:24:23 by tor              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGO_H

# define ALGO_H

int	ft_median(int *tab, int size);
int	ft_max(int *tab, int size);
int	ft_min(int *tab, int size);
int	is_next_bigger(int first, int next);
int	is_bigger_than_med(int to_compare, int med);
int	is_ascending(int *tab, int size);
int	is_descending(int *tab, int size);

#endif