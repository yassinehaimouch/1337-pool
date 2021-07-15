/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaimouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 09:29:30 by yhaimouc          #+#    #+#             */
/*   Updated: 2021/07/08 10:04:31 by yhaimouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_iterative_factorial(int nb)
{
	int i;
	i = 1;
	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (nb > i)
	{
		i = i * nb;
		i--;
		return (i);
	}
	return (1);
}
int main()
{
	printf("%d",ft_iterative_factorial(5));
}
