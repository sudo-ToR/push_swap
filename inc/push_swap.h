/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 17:27:16 by lnoirot           #+#    #+#             */
/*   Updated: 2021/08/26 15:19:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include <limits.h>

# include "../libft/libft.h"
# include "structure.h"
# include "mouvements.h"

int		check_number(char *to_check);
char	*concat_table(char **to_concat);

void	create_stack(t_push_swap *main, char *arg);
int		is_sorted_lst(int *to_check, int size);
int		has_duplicates(int *to_check, int size);
int		has_only_int(char *arg);
void	parsing(char **to_parse, t_push_swap *main);
void	free_struct_push_swap(t_push_swap *to_free);

void	push_b(t_push_swap *main);
void	push_a(t_push_swap *main);
void	d_rotate(t_push_swap *main);
void	r_drotate(t_push_swap *main);

void	print_stack(int *stack_a, int *stack_b, int len_a, int len_b);
#endif