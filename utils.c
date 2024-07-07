/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 12:59:04 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/07/07 20:52:31 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	present_location(t_list *stack)
{
	int	i;
	int	medium;
	int	length;

	i = 0;
	if(!stack)
		return;
	length = ft_lstize(stack);
	medium = length / 2;
	while(stack)
	{
		stack->location = i;
		if(i <= medium)
			stack->above_medium = true;
		else
			stack->above_medium = false;
		stack = stack->next;
		i++;
	}
}

t_list	*find_smallest_number(t_list *stack)
{
	t_list	*tmp;
	t_list	*smallest;

	if (stack == NULL)
		return (NULL);

	tmp = stack;
	smallest = stack;

	while (tmp)
	{
		if (tmp->content < smallest->content)
			smallest = tmp;
		tmp = tmp->next;
	}
	return (smallest);
}

void	initialize_nodes(t_list *stack_a, t_list *stack_b)
{
	present_location(stack_a);
	present_location(stack_b);
	match_nodes(stack_a, stack_b);
	set_price(stack_a, stack_b);
	find_cheapest(stack_a, stack_b);
}