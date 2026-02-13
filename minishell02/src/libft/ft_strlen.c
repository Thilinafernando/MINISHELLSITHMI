/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukul <thilinaetoro4575@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:18:23 by siellage          #+#    #+#             */
/*   Updated: 2026/02/13 18:10:50 by tkurukul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (s == NULL)
		return (0);
	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
/*#include <stdio.h>
int main()
{
    const char *str = "Hello, World!";
    size_t length = ft_strlen(str);
    printf("The length of the string \"%s\" is: %zu\n", str, length);

    return 0;
}*/
