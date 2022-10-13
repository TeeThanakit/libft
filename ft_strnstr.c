/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchokbun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:57:27 by tchokbun          #+#    #+#             */
/*   Updated: 2022/10/11 00:37:43 by tchokbun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	if (!little[0])
		return ((char *)big);
	while (x < len && big[x])
	{
		if (big[x] == little[y])
			y++;
		else
		{
			x = x - y;
			y = 0;
		}
		if (!little[y])
			return ((char *)big + x - y + 1);
		x++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	const char largestring[30] = "aaabcabcd";
	const char smallstring[10] = "aabc";
	printf ("%s\n",ft_strnstr(largestring, smallstring, 10));
	printf ("%s",ft_strnstr(largestring, "a", 1));
}*/