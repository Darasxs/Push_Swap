/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:02:00 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/06/27 16:26:25 by dpaluszk         ###   ########.fr       */
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
	//write(1, "OK.\n", 4);
	return (true);
}

bool	check_duplicate(t_list *head, long n)
{
	t_list	*tmp;

	tmp = head;
	while (tmp)
	{
		if (tmp->content == n)
			return (true);
		tmp = tmp->next;
	}
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
