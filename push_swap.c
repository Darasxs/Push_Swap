/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 13:44:09 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/07/06 16:55:30 by dpaluszk         ###   ########.fr       */
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
			if (stack_b->content < stack_a->content && (target == NULL
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


//////////////////////////////////////////////////
//void match_nodes(t_list *stack_a, t_list *stack_b)
//{
//	t_list	*current_a;
//	t_list	*target_node;
//	long	best_match_index;
	
//	while(stack_b)
//	{
//		best_match_index = LONG_MAX;
//		current_a = stack_a;
//		while(current_a)
//		{
//			if(current_a->content > stack_b->content && current_a->content < best_match_index)
//			{
//				best_match_index = current_a->content;
//				target_node = current_a;
//			}
//			current_a = current_a->next;
//		}
//		if(best_match_index == LONG_MAX)
//			stack_b->target = find_smallest_number(stack_a);
//		else
//			stack_b->target = target_node;
//		stack_b = stack_b->next;
//	}
//}  
