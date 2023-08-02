/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:22:24 by bhildebr          #+#    #+#             */
/*   Updated: 2023/08/02 19:05:46 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

// The strdup() function returns a pointer to a new string which is a duplicate
// of the string s.  Memory for the new string is obtained with malloc(3), and
// can be freed with free(3).

char	*ft_strdup(const char *s)
{
	int		index;
	char	*ptr;

	index = 0;
	ptr = malloc(ft_strlen(s) * sizeof(char));
	while (s[index])
	{
		ptr[index] = s[index];
		index++;
	}
	return (ptr);
}
