/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mofaisal <mofaisal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:13:23 by jalwahei          #+#    #+#             */
/*   Updated: 2023/03/13 21:42:36 by mofaisal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>

typedef struct s_list
{
	int			content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstlast(t_list *lst)
{
	if(!lst)
		return (NULL);
	while(lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
	
	ft_lstlast(*(lst))->next = new;
	new->next = NULL;
}




// int main()
// {
// 	t_list *a = ft_lstnew(42);
// 	t_list *b = ft_lstnew(420);
// 	t_list *c = ft_lstnew(1420);
// 	t_list *d = ft_lstnew(4320);
// 	t_list *e = ft_lstnew(12345);

// 	a->next = b;
// 	b->next = c;
// 	c->next = d;
	
// 	ft_lstadd_back(&a, e);
// 		while(a)
// 		{
// 			printf("%d\n", a->content);
// 			a = a->next;
// 		}
// }