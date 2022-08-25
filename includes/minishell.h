/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkultaev <rkultaev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:25:24 by rkultaev          #+#    #+#             */
/*   Updated: 2022/08/25 12:11:07 by rkultaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <signal.h>
# include <pthread.h>
# include <stdbool.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <readline/readline.h>
# include <readline/history.h>
# include <stdbool.h>
// # include </Users/tfedoren/goinfre/.brew/opt/readline/include/readline/readline.h>
// # include </Users/tfedoren/goinfre/.brew/opt/readline/include/readline/history.h>

# include <libft.h>
# include <ft_printf.h>
# include <get_next_line.h>
# include "macros_and_enums.h"
# include "functions_proto.h"
# include "execution_struct.h"

#endif