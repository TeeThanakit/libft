/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchokbun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:29:55 by tchokbun          #+#    #+#             */
/*   Updated: 2022/10/13 16:11:11 by tchokbun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*x;
	char	*y;

	i = 0;
	x = (char *)dst;
	y = (char *)src;
	if (x == NULL && !y)
		return (NULL);
	while (i < n)
	{
		*x = *y;
		x++;
		y++;
		i++;
	}
	return (dst);
}
/*
int main ()
{
  char str1[] = "Geeks";
  char str2[] = "Quiz";

  puts("str1 before memcpy ");
  puts(str1);

  //Copies contents of str2 to str1 
  ft_memcpy(str1, str2, 2);

  puts("\nstr1 after memcpy ");
  puts(str1);

  return 0;
}*/
