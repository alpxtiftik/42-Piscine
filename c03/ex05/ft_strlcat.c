/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtiftik <ahtiftik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 15:45:52 by ahtiftik          #+#    #+#             */
/*   Updated: 2025/10/05 19:05:00 by ahtiftik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	fill;

	i = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	fill = size - dlen - 1;
	if (dlen >= size)
	{
		return (size + slen);
	}
	while (src[i] != '\0' && fill != 0)
	{
		dest[dlen + i] = src[i];
		i++;
		fill--;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}
