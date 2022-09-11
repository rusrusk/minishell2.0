/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkultaev <rkultaev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 21:55:42 by rkultaev          #+#    #+#             */
/*   Updated: 2022/09/11 19:15:41 by rkultaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

t_node	*launch_fd(t_node *head)
{
	if (!set_delimiter_fd(head))
		return (NULL);
	set_command_fd(head);
	return (head);
}
