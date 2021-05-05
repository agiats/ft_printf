/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomeya <tsomeya@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 10:14:29 by tsomeya           #+#    #+#             */
/*   Updated: 2021/04/24 23:31:16 by tsomeya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_pow(size_t n, int a)
{
	int		i;
	size_t	tmp;

	tmp = n;
	i = 1;
	if (a <= 0)
		return (1);
	while (i < a)
	{
		n *= tmp;
		i++;
	}
	return (n);
}