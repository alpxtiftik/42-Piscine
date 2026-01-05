/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtiftik <ahtiftik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:20:29 by ahtiftik          #+#    #+#             */
/*   Updated: 2025/10/16 21:35:56 by ahtiftik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	calculate_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total_len;
	int	sep_len;

	i = 0;
	total_len = 0;
	sep_len = ft_strlen(sep);
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			total_len += sep_len;
		}
		i++;
	}
	return (total_len);
}

void	perform_join(char *dest, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	k = 0;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
			dest[k++] = strs[i][j];
		j = -1;
		if (i < size - 1)
		{
			while (sep[++j])
				dest[k++] = sep[j];
		}
	}
	dest[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*p;
	int		total_len;

	if (size == 0)
	{
		p = (char *)malloc(sizeof(char) * 1);
		if (!p)
			return (NULL);
		p[0] = '\0';
		return (p);
	}
	total_len = calculate_total_len(size, strs, sep);
	p = (char *)malloc(sizeof(char) * total_len + 1);
	if (!p)
		return (NULL);
	perform_join(p, size, strs, sep);
	return (p);
}
int main ()
{
	char str[] = {"alp", "ahmet", "tiftik"};
	printf("%s", ft_strjoin(3, &str, "_*_"));
	
}