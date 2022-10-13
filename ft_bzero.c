/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchokbun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:52:17 by tchokbun          #+#    #+#             */
/*   Updated: 2022/10/13 15:23:37 by tchokbun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*x;
	size_t	i;

	i = 0;
	x = (char *)s;
	while (i < n)
	{
		*x = 0;
		x++;
		i++;
	}
}
/*
#include <stdlib.h>
#include <string.h>
int main()
{
	char	str1[]="Teeboyzaza";
	bzero(str1+1, 2);
	printf("%s\n",str1);

	char	str2[]="Teeboyzaza";
	ft_bzero(str2+1, 2);
	printf("%s\n",str2);
}*/
