/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnshimiy <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:57:42 by mnshimiy          #+#    #+#             */
/*   Updated: 2022/10/04 20:30:35 by mnshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i < nb && nb % i != 0)
	{
		i++;
	}
	if (i == nb)
	{
		return (1);
	}
	else
	{
		return (0);
	}	
}
