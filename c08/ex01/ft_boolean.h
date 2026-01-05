/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtiftik <ahtiftik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:19:11 by ahtiftik          #+#    #+#             */
/*   Updated: 2025/10/16 20:51:55 by ahtiftik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef int	t_bool;
# define FALSE 0
# define TRUE 1
# define SUCCESS 0

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

# define EVEN(X) (X % 2 == 0)
#endif
