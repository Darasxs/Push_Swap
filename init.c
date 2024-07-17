/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:55:09 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/07/17 13:07:19 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	ft_atol(const char *str)
{
	long	result;
	int		counter;
	int		sign;

	result = 0;
	counter = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		counter++;
		if (counter > 1)
			return (0);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

void	initialize_stack(t_list **stack, char **argv)
{
	size_t	i;
	long	number;
	t_list	*node;

	i = 0;
	while (argv[i])
	{
		if(*argv[i] == '\0')
			return_error(stack);
		if (string_error(argv[i]) == false)
			return_error(stack);
		number = ft_atol(argv[i]);
		if(number > INT_MAX || number < INT_MIN)
			return_error(stack);
		node = ft_lstnew(number);
		if (!node) 
	 		return_error(stack);
		ft_lstadd_back(stack, node);
		if (check_duplicate(*stack, number))
			return_error(stack);
		i++;
	}
}
