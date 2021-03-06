/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 19:22:45 by amalsago          #+#    #+#             */
/*   Updated: 2019/12/31 03:15:53 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

char				*ft_getenv(const char *name)
{
	int				i;
	int				len;
	char			*value;
	extern char		**environ;

	i = -1;
	value = NULL;
	while (environ[++i])
	{
		len = ft_strlen(name);
		if (ft_strnequ(environ[i], name, len) && environ[i][len] == '=')
		{
			value = ft_strchr(environ[i], '=') + 1;
			break ;
		}
	}
	return (value);
}
