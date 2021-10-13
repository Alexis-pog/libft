/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:56:49 by acoquele          #+#    #+#             */
/*   Updated: 2021/09/02 10:23:25 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	a;

	a = 0;
	while (*s)
	{
		a++;
		s++;
	}
	return (a);
}
/*
int main()
{
	printf("%zu", ft_strlen("hello"));
}
*/