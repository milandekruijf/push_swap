/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_count_digits.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/06 11:28:05 by mde-krui      #+#    #+#                 */
/*   Updated: 2023/11/06 11:28:29 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_count_digits(int num)
{
	size_t	digit_count;

	digit_count = 1;
	while (num / 10)
	{
		num /= 10;
		digit_count++;
	}
	return (digit_count);
}
