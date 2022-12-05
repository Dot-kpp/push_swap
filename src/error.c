/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:26:30 by jpilotte          #+#    #+#             */
/*   Updated: 2022/11/25 12:01:20 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void no_input_error(void)
{
    ft_printf("\n\nThank you for using my push_swap project!\n");
    ft_printf("Example of valid command:\n\n./push_swap 10 4 5 7 23 4\n\n");
    exit(0);
}

void dubs_error(void)
{
    ft_printf("\n Error: Duplicate numbers in the list.\n");
    exit(0);
}

void invalid_list_error(void)
{
    ft_printf("\n Error: Invalid characters in the list provided.\n");
    exit(0);
}

void already_sorted(void)
{
    ft_printf("\n Error: List already sorted\n");
	exit (0);
}