/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdecaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:47:06 by zdecaire          #+#    #+#             */
/*   Updated: 2020/07/09 15:05:40 by zdecaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char numbers){
	write(1, &numbers, 1);
}

void ft_print_numbers(void) {
	int number = '0';
	while(number <='9') {
		ft_putchar(number);
		number +=1;
	}
}
