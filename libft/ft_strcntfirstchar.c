/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcntfirstchar.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdiab- <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 22:02:21 by zdiab-            #+#    #+#             */
/*   Updated: 2018/10/06 22:02:25 by zdiab-           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strcntfirstchar(char *str, const char *charset)
{
	char			*ptr;
	int				index;
	unsigned int	count;
	unsigned int	tmp;

	ptr = str;
	count = 0;
	while (*ptr)
	{
		index = 0;
		tmp = count;
		while (charset[index])
			if (charset[index++] == *ptr)
				++count;
		if (count == tmp)
			return (count);
		++ptr;
	}
	return (count);
}
