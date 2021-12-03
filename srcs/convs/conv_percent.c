/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_percent.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:59:30 by jmaia             #+#    #+#             */
/*   Updated: 2021/12/03 14:08:25 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conv_percent.h"

int	conv_percent(t_dynamic_buffer *output_line_buffer, t_options *options)
{
	const unsigned char	*raw_data;

	raw_data = malloc(sizeof(*raw_data) * 2);
	if (!raw_data)
		return (1);
	raw_data[0] = '%';
	raw_data[1] = 0;
	return (apply_general_options(output_line_buffer, options, raw_data));
}
