/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_o_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mman <mman@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 20:35:19 by mman              #+#    #+#             */
/*   Updated: 2023/12/11 20:35:21 by mman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/includes/libft.h"
# include <stdlib.h>

// Stack
// note Dec 06 -- instead of is_on_top, we use Index. For all rounded improvements at low cost.

typedef struct s_member
{
	int				value;
	int				s_index;
	struct s_member	*next;
	struct s_member	*prev;

}				t_value;

// CODING WIP FUNCTIONS
void	fullstack(t_value *stack);



// __ todo ; prototypes -- parsed by chatgpt

// errors
void	ft_error(void);
void	ft_allocation_failure(char *str);

// -- UTILITIES
int		ft_checksorted(t_value *list);
int		ft_util_stacksize(t_value *stack);
t_value	*ft_util_reset_head(t_value **stack);
t_value	*ft_search_by_index(t_value **stack, int searched_index);



// -- HEAD INITIATION
t_value	*ft_init(int size, char **values);
t_value	*ft_new_head(int value);
void	ft_add_back(t_value **head, int value, int index);
void	ft_free(t_value **head);
int		ft_checkifvalid(t_value **values);

void	ft_sort(t_value	**a);
void	ft_last_three(t_value **a);
void	ft_algo_perform(t_value **a);

// -- t
void	ft_rotate(void *data);
void	ft_reverse_rotate(void *data);
void	ft_lstitr(t_value *lst, void (*f)(void*));


// -- THE MOVES
void	ft_moves_ra(t_value **list);
void	ft_moves_rra(t_value **list);

void	ft_moves_sa(t_value **list);







#endif
