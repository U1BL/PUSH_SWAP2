/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mofaisal <mofaisal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:37:39 by jalwahei          #+#    #+#             */
/*   Updated: 2023/03/11 16:53:42 by mofaisal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(int content)
{
	t_list *res = malloc(sizeof(t_list));

	res->content = content;
	res->next = NULL;
	return (res);
}

// int main()
// {
// 	t_list *l1 = ft_lstnew(42);
// 	t_list *l2 = ft_lstnew(42);

// 	l1->next = l2;

// 	while(l1)
// 	{
// 		printf("%d", l1->content);
// 		l1 = ;
// 	}
// }