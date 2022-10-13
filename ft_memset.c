/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchokbun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:10:57 by tchokbun          #+#    #+#             */
/*   Updated: 2022/10/13 15:35:49 by tchokbun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*x;

	i = 0;
	x = (char *)b;
	while (i < len)
	{
		*x = c;
		x++;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main () 
{
   char str[]="GeeksForGeeks is for programming geeks.";
   printf("\nBefore memset(): %s\n", str);
   
   ft_memset(str,'$',7);
   printf("After memset():  %s", str);
   return(0);
}*/
