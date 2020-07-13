/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eminnaar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:22:51 by eminnaar          #+#    #+#             */
/*   Updated: 2020/07/13 14:37:12 by eminnaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb);

int ft_iterative_factorial(int nb)
{
   int count;
   int factor;

   count = 1;
   factor = 1;

    if (nb <= 0)
	{
    return(0);
	}
    while (count <= nb)
	{
	factor = factor * count;
    count++;
	}
    return(factor);
	}

int     main()
{
    int num = 4;
    int fact = ft_iterative_factorial(num);
    printf("%d", fact);
    return 0;
}
