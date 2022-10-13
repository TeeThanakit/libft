/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchokbun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:34:05 by tchokbun          #+#    #+#             */
/*   Updated: 2022/10/13 17:50:15 by tchokbun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*x;
	char	*y;
	size_t	i;

	i = 0;
	x = (char *)dst;
	y = (char *)src;
	if (x == NULL && y == NULL)
		return (NULL);
	while (i < len)
	{
		*x=*y;
		x++;
		y++;
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Geeks"; // Array of size 100
    char str2[] = "Quiz"; // Array of size 5

    puts("str1 before memmove ");
    puts(str1);

    //Copies contents of str2 to sr1
    ft_memmove(str1, str2, 3);

    puts("\nstr1 after memmove ");
    puts(str1);

    return 0;
}*/
