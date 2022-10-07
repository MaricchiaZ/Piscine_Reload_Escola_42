/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 22:53:24 by maclara-          #+#    #+#             */
/*   Updated: 2022/08/25 20:59:15 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f) (char*))
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[j])
	{
		if (f(tab[j]) == 1)
			i++;
		j++;
	}
	return (i);
}