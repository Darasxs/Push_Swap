/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 10:55:24 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/06/26 12:21:32 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_list **stack)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;

	first = *stack;
	second = first->next;
	third = second->next;
	if (*(second->content) > *(third->content)
		&& *(first->content) < *(third->content))
	{
		rra(stack, 1);
		sa(stack, 1);
	}
	else if (*(first->content) > *(second->content)
		&& *(first->content) < *(third->content))
		sa(stack, 1);
	else if (*(first->content) > *(third->content)
		&& *(first->content) < *(second->content))
		rra(stack, 1);
	else if (*(third->content) < *(second->content)
		&& *(second->content) < *(first->content))
	{
		sa(stack, 1);
		rra(stack, 1);
	}
	else if (*(first->content) > *(second->content)
		&& *(first->content) > *(third->content))
		ra(stack, 1);
}
