/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:06:58 by bhildebr          #+#    #+#             */
/*   Updated: 2023/07/27 15:58:59 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The strnstr() function locates the first occurrence of the null-terminated 
// string little in the string big, where not more than len characters are 
// searched.  Characters that appear after a ‘\0’ character are not searched.  
// Since the strnstr() function is a FreeBSD specific API, it should only be 
// used when portability is not a concern.

char	*ft_strnstr(const char *big, const char *little, unsigned int len)
{
	unsigned int	big_index;
	unsigned int	little_index;
	char			*first_ocurrence;

	big_index = 0;
	little_index = 0;
	while (big_index < len)
	{
		if (big[big_index + little_index] == little[little_index])
		{
			first_ocurrence = (char *)&big[big_index];
			while (little[little_index] != 0)
			{
				if (big[big_index + little_index] != little[little_index])
					break ;
				little_index++;
			}
			if (little[little_index] == 0)
				return (first_ocurrence);
			else
				little_index = 0;
		}
		big_index++;
	}
	return (0);
}