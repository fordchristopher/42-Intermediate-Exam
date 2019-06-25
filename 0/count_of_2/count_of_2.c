/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_of_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 09:02:30 by exam              #+#    #+#             */
/*   Updated: 2019/06/25 09:05:09 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		count_of_2(int n)
{
	int		count;
	int		i;
	int		j;

	count = 0;
	i = n;
	while (i > 1)
	{
		j = i;
		while (j > 0)
		{
			if (j % 10 == 2)
				count++;
			j /= 10;
		}
		i--;
	}
	return (count);
}
