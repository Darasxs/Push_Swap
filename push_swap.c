/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 13:44:09 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/07/07 13:22:37 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	match_nodes(t_list *stack_a, t_list *stack_b)
{
	t_list	*target;
	t_list	*tmp;

	while (stack_b)
	{
		target = NULL;
		tmp = stack_a;
		while (tmp)
		{
			if (stack_b->content < tmp->content && (target == NULL
					|| tmp->content > target->content))
				target = tmp;
			tmp = tmp->next;
		}
		if (target == NULL)
			stack_b->target = find_smallest_number(stack_a);
		else
			stack_b->target = target;
		stack_b = stack_b->next;
	}
}

void	push_swap(t_list **stack_a, t_list **stack_b)
{
	while ((*stack_a)->next->next->next != NULL)
		pa(stack_a, stack_b);
	sort_three(stack_a);
}
