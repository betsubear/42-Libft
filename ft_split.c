/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroyet <aroyet@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 08:57:18 by aroyet            #+#    #+#             */
/*   Updated: 2023/03/11 00:20:27 by aroyet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_len(char *s, char c)
{
	size_t		i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static size_t	count_words(char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	while (s[i] != '\0' && s[i] == c)
		i++;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] != c)
			i++;
		count++;
		while (s[i] != '\0' && s[i] == c)
			i++;
	}
	return (count);
}

static char	*nextword(char *s, char c)
{
	while (*s != '\0' && *s == c)
		s++;
	return (s);
}

static void	free_strings(char **strings, int current)
{			
	int	i;

	i = 0;
	while (i < current)
	{
		free(strings[i]);
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**splitab;
	size_t	count;
	size_t	current;

	if (s == NULL)
		return (NULL);
	count = count_words((char *)s, c);
	splitab = malloc(sizeof(char *) * (count + 1));
	if (splitab == NULL)
		return (NULL);
	current = 0;
	while (current < count)
	{
		s = nextword((char *)s, c);
		splitab[current] = ft_substr(s, 0, word_len((char *)s, c));
		if (splitab[current] == NULL)
		{
			free_strings(splitab, current);
			return (NULL);
		}
		current++;
		s = s + word_len((char *)s, c);
	}
	splitab[current] = NULL;
	return (splitab);
}

/*#include <stdio.h>
int		main()
{
	char	buf[4096];
	char**	split_strings;
	int		i;

	printf("-> Enter the string to split\n");
	ft_bzero(buf, 4096);
	read(STDIN_FILENO, buf, 4096);
	split_strings = ft_split(buf, ' ');
	if (split_strings == NULL)
		;//printf("An error happened, please retry\n");
	while (1)
	{
		;
	}
	//i = 0;
	//printf("-> Voila\n");
	//while (split_strings[i] != NULL)
	//{
	//	printf("%s\n", split_strings[i]);
	//	i++;
	//}
	//printf("\n");
}*/
