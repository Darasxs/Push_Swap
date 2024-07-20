/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:11:47 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/07/20 18:38:07 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	**arguments;

	arguments = argv;
	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (EXIT_FAILURE);
	else if (argc == 2)
	{
		arguments = ft_split(argv[1], ' ');
		initialize_stack(&stack_a, arguments);
		free_split(arguments);
	}
	else
		initialize_stack(&stack_a, arguments + 1);
	if (!stack_a)
		return (EXIT_FAILURE);
	if (!is_sorted(stack_a))
		start_sorting(stack_a, stack_b);
	free_stack(&stack_a);
	return (0);
}
