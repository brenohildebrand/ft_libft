/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:39:48 by bhildebr          #+#    #+#             */
/*   Updated: 2023/07/24 18:59:07 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// checks for a digit (0 through 9).

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}