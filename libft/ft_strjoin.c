/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mofaisal <mofaisal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:49:37 by mofaisal          #+#    #+#             */
/*   Updated: 2023/03/02 21:35:11 by mofaisal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *saved, char *buffer)
{
	int		i;
	int		j;
	char	*joined;

	i = 0;
	j = 0;
	if (!saved)
	{
		saved = (char *)ft_calloc(sizeof(char), 1);
		saved[0] = '\0';
	}
	if (!buffer)
		return (NULL);
	joined = (char *)malloc((ft_strlen(saved) + ft_strlen(buffer) + 1));
	if (!joined)
		return (free(saved), free(joined), NULL);
	while (saved[i])
		joined[j++] = saved[i++];
	i = 0;
	while (buffer[i])
		joined[j++] = buffer[i++];
	joined[j] = '\0';
	if (joined[0] == '\0')
		return (free(saved), free(joined), NULL);
	return (free(saved), joined);
}

// int main()
// {
//     char *ptr1 = NULL;
//     char ptr2[]= "sfh";
//     printf("%s",ft_strjoin(ptr1,ptr2));
//     return (0);
// }