/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtiftik <ahtiftik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 17:23:29 by ahtiftik          #+#    #+#             */
/*   Updated: 2025/10/01 19:46:11 by ahtiftik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		if ((i == 0 && str[i] >= 'a' && str[i] <= 'z')
			|| (
				(str[i - 1] < '0'
					|| (str[i - 1] > '9' && str[i - 1] < 'A')
					|| (str[i - 1] > 'Z' && str[i - 1] < 'a')
					|| str[i - 1] > 'z')
				&& (str[i] >= 'a' && str[i] <= 'z')))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
