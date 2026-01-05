/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtiftik <ahtiftik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 19:32:35 by ahtiftik          #+#    #+#             */
/*   Updated: 2025/10/08 16:25:33 by ahtiftik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	result = 1;
	i = 1;
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
