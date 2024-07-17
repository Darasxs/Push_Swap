/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 12:59:04 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/07/17 15:48:33 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	present_location(t_list *stack)
{
	int	i;
	int	medium;
	int	length;

	i = 0;
	if (!stack)
		return ;
	length = ft_lstsize(stack);
	medium = length / 2;
	while (stack)
	{
		stack->location = i;
		if (i <= medium)
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
void	determine_price(t_list *stack_a, t_list *stack_b)
{
	size_t	len_a;
	size_t	len_b;

	len_a = ft_lstsize(stack_a);
	len_b = ft_lstsize(stack_b);
	while (stack_b)
	{
		if (stack_b->above_medium == true)
			stack_b->price = stack_b->location;
		else if (stack_b->above_medium == false)
			stack_b->price = len_b - (stack_b->location);
		if (stack_b->target && stack_b->target->above_medium == true) // tu jest problem
			stack_b->price += stack_b->target->location;
		else if (stack_b->target->above_medium == false)
			stack_b->price += len_a - (stack_b->target->location);
		stack_b = stack_b->next;
	}
}

void	determine_cheapest(t_list *stack_b)
{
	t_list	*tmp;
	t_list	*best_match;

	tmp = stack_b;
	best_match = stack_b;
	if (!stack_b)
		return ;
	while (tmp)
	{
		if (tmp->price < best_match->price)
			best_match = tmp;
		tmp = tmp->next;
	}
	best_match->cheapest = true;
}

t_list	*find_cheapest_node(t_list *stack)
{
	if (!stack)
		return (NULL);
	while (stack)
	{
		if (stack->cheapest)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}
