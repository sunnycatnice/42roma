/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmangola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 10:58:12 by dmangola          #+#    #+#             */
/*   Updated: 2020/11/08 11:25:39 by dmangola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_iterative_factorial(int nb)
{
	unsigned int	fact;

	fact = 1;
	if (nb < 0 || nb >= 12)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (nb >= 1)
		fact *= nb--;
	return (fact);
}
