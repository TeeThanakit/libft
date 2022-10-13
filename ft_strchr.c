/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchokbun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 22:37:42 by tchokbun          #+#    #+#             */
/*   Updated: 2022/10/13 15:05:02 by tchokbun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
    const char str[] = "http://www.tutorialspoint.com";
    const char ch = '.';
    char * ret;
    ret = ft_strchr(str, ch);
    printf("String after |%c| is - |%s|\n", ch, ret);

    return (0);
}*/
