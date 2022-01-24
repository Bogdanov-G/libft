/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dykk Dessie <gleb_bogdan@mail.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 10:07:58 by Dykk Dessie       #+#    #+#             */
/*   Updated: 2021/10/25 13:42:32 by Dykk Dessie      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
The sbstr_counter() accepts pointer to the string and single delimiter
character. Returns the number of substribgs in string separated by one or
several delimiters characters.
*/
static int	sbstr_counter(char const *s, char c)
{
	int		counter;
	char	*tmp_p;

	counter = 0;
	if (s)
	{
		tmp_p = (char *)s;
		while (*tmp_p != '\0')
		{
			if (*tmp_p != c && (tmp_p == s || *(tmp_p - 1) == c))
				counter++;
			tmp_p++;
		}
	}
	return (counter);
}

/*
The sbstr_len() accepts pointer to the substring s and single delimiter
character c. Returns the length of current substring (the number of 
characters up to the first delimiter character or terminating '\0'.
*/
static int	sbstr_len(char const *s, char c)
{
	char	*end;

	end = ft_strchr(s, c);
	if (!end)
		end = ft_strchr(s, '\0');
	return (end - s);
}

/*
The arr_killer() frees up (with free(3)) the memory allocated for each
existing element of the array str_arr as well as for the array itself
in conclusion.
*/
static char	**arr_killer(char **str_arr)
{
	while (*str_arr)
		free(*str_arr++);
	free(str_arr);
	return (NULL);
}

/*
The ft_split() allocates (with malloc(3)) and returns an array of strings
obtained by splitting ’s’ using the character ’c’ as a delimiter. The array
must be ended by a NULL pointer. Returns NULL if the allocation fails.
*/
char	**ft_split(char const *s, char c)
{
	const int	pieces_numb = sbstr_counter(s, c);
	char		**str_arr;
	int			str_len;
	int			i;
	int			j;

	str_arr = malloc(sizeof(char *) * (pieces_numb + 1));
	if (!str_arr)
		return (NULL);
	i = 0;
	str_arr[pieces_numb] = NULL;
	while (i < pieces_numb)
	{
		while (*s == c)
			s++;
		str_len = sbstr_len(s, c);
		str_arr[i] = malloc(sizeof(char) * (str_len + 1));
		if (!str_arr[i])
			return (arr_killer(str_arr));
		j = 0;
		while (j < str_len)
			str_arr[i][j++] = *s++;
		str_arr[i++][j] = '\0';
	}
	return (str_arr);
}
