/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:11:47 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/07/28 13:00:58 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	start_sorting(t_list *stack_a, t_list *stack_b)
{
	if (ft_lstsize(stack_a) <= 1)
		free_stack(&stack_a);
	else if (ft_lstsize(stack_a) == 2)
		sa(&stack_a, 1);
	else if (ft_lstsize(stack_a) == 3)
		sort_three(&stack_a);
	else
		push_swap(&stack_a, &stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
}

void	initialize_stacks(int argc, char **argv, t_list **stack_a,
		int *split_flag)
{
	char	**arguments;

	*stack_a = NULL;
	*split_flag = 0;
	arguments = argv;
	if (argc == 2)
	{
		*split_flag = 1;
		arguments = ft_split(argv[1], ' ');
		initialize_stack(stack_a, arguments, *split_flag);
		free_split(arguments);
	}
	else
		initialize_stack(stack_a, arguments + 1, *split_flag);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		split_flag;

	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (EXIT_FAILURE);
	initialize_stacks(argc, argv, &stack_a, &split_flag);
	if (!stack_a)
		return (EXIT_FAILURE);
	stack_b = NULL;
	if (!is_sorted(stack_a))
		start_sorting(stack_a, stack_b);
	else
		free_stack(&stack_a);
	return (0);
}
