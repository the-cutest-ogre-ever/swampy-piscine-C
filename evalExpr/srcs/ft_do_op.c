/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijose <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 12:55:42 by ijose             #+#    #+#             */
/*   Updated: 2020/08/09 13:15:14 by ijose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_do_op(int num1, int num2, char op)
{
	if (op == '+')
		return (num1 + num2);
	if (op == '-')
		return (num1 - num2);
	if (op == '/')
		return (num1 / num2);
	if (op == '%')
		return (num1 % num2);
	if (op == '*')
		return (num1 * num2);
	return (0);
}