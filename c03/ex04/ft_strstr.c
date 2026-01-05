/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtiftik <ahtiftik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 21:11:03 by ahtiftik          #+#    #+#             */
/*   Updated: 2025/10/13 20:24:47 by ahtiftik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
