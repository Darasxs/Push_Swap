/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:02:00 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/07/20 17:53:40 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_sorted(t_list *head)
{
	t_list	*tmp;

	tmp = head;
	while (tmp->next)
	{
		if (tmp->content > tmp->next->content)
			return (false);
		tmp = tmp->next;
	}
	write(1, "OK\n", 3);
	return (true);
}

bool	check_duplicate(t_list *head, long n)
{
	t_list	*tmp;
	int		counter;

	counter = 0;
	tmp = head;
	if (!tmp)
		return (0);
	while (tmp)
	{
		if (tmp->content == n)
			counter++;
		tmp = tmp->next;
	}
	if (counter > 1)
		return (true);
	return (false);
}

bool	string_error(char *str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		if (*str == '-')
			counter++;
		else if (!(*str >= '0' && *str <= '9'))
			return (false);
		str++;
	}
	if (counter > 1)
		return (false);
	return (true);
}
