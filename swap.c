/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:09:16 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/06/06 15:58:28 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//t_list	*ft_lstnew(int *content)
//{
//	t_list	*new;

//	new = malloc(sizeof(t_list));
//	if (new == NULL)
//		return (NULL);
//	new->content = content;
//	new->next = NULL;
//	return (new);
//}

void	sa(t_list **stack, int check)
{
	t_list	*tmp1;
	t_list	*tmp2;
	
	if(check == 1)
		write(1, "sa\n", 3);
	if (stack != NULL)
	{
		if (*stack && (*stack)->next)
		{
			tmp1 = (*stack);
			tmp2 = (*stack)->next;
			tmp1->next = tmp1->next->next;
			tmp2->next = tmp1;
			*stack = tmp2;
		}
	}
}

void	sb(t_list **stack, int check)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (check == 1)
		write(1, "sb\n", 3);
	if (stack != NULL)
	{
		if (*stack && (*stack)->next)
		{
			tmp1 = (*stack);
			tmp2 = (*stack)->next;
			tmp1->next = tmp1->next->next;
			tmp2->next = tmp1;
			*stack = tmp2;
		}
	}
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	if (stack_a != NULL && stack_b != NULL)
	{
		sa(stack_a, 0);
		sb(stack_b, 0);
		write(1, "ss\n", 3);
	}
}
//int main(void)
//{
//    t_list  *first_node;
//    t_list  *new;
//    t_list  *node;
//    int     a = 5;
//    int     b = 7;
//    int     c = 14;
//    int     d = 323;
//    new = ft_lstnew(&a);
//    first_node = new;
//    new->next = ft_lstnew(&b);
//    new = new->next;
//    new->next = ft_lstnew(&c);
//    new = new->next;
//    new->next = ft_lstnew(&d);
//    node = first_node;
//    while (node)
//    {
//     printf("%d\n", (int) *(node->content));
//     node = node->next;
//    }
//	printf("\n");
//    sa(&first_node, 1);
//	printf("\n");
//    node = first_node;
//    while (node)
//    {
//     printf("%d\n", *(node->content));
//     node = node->next;
//    }
//    return (0);
//}