/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 16:08:08 by acoquele          #+#    #+#             */
/*   Updated: 2021/09/25 12:43:26 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	verif_int_max(const char *str, int n)
{
	char	*str2;
	int		k;

	k = 0;
	str2 = malloc(sizeof(char) * ft_strlen(str));
	if (!str2)
		return (0);
	if (str[n] == '-')
	{
		str2[k] = '-';
		n++;
		k++;
	}
	while ((str[n] >= '0' && str[n] <= '9'))
	{
		str2[k] = (char)str[n];
		n++;
		k++;
	}
	free(str2);
	if (ft_strlen(str2) >= 19 && str2[0] == '-' )
		return (2);
	if (ft_strlen(str2) >= 19)
		return (1);
	return (0);
}

//heloo world

int	ft_atoi(const char *str)
{
	int	a[3];

	a[0] = 0;
	a[1] = 0;
	a[2] = 1;
	while (str[a[0]] == '\t' || str[a[0]] == '\n' || str[a[0]] == '\v'
		|| str[a[0]] == '\f' || str[a[0]] == '\r' || str[a[0]] == ' ')
		a[0]++;
	if (verif_int_max(str, a[0]) == 2)
		return (0);
	if (verif_int_max(str, a[0]) == 1)
		return (-1);
	if (str[a[0]] == '-' || str[a[0]] == '+')
	{
		if (str[a[0]] == '-')
			a[2] *= -1;
		a[0]++;
	}
	while (str[a[0]] >= '0' && str[a[0]] <= '9')
	{
		a[1] = a[1] * 10 + (str[a[0]] - '0');
		a[0]++;
	}
	return (a[1] * a[2]);
}
/*
int main(int argc, char *argv[1])
{
	printf("%d\n",atoi(argv[1]));
	printf("%d\n",ft_atoi(argv[1]));
	printf("%d\n",atoi(argv[1]));
	return (0);
}
*/