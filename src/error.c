/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:26:30 by jpilotte          #+#    #+#             */
/*   Updated: 2022/11/23 16:13:09 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void no_input_error(void)
{
    ft_printf("\n\nThank you for using my push_swap project!\n");
    ft_printf("Example of valid command:\n\n./push_swap 10 4 5 7 23 4\n\n");
}

void dubs_error(void)
{
    ft_printf("\n Error: Duplicate numbers in the list.\n");
}

void invalid_list_error(void)
{
    ft_printf("\n Error: Invalid characters in the list provided.\n");
}