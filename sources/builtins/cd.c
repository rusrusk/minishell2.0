/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkultaev <rkultaev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:46:33 by rkultaev          #+#    #+#             */
/*   Updated: 2022/09/02 10:29:15 by rkultaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static void	cd_home(t_node *node)
{
	char	*home_path;

	home_path = get_env(node->env, "HOME");
	if (!home_path)
	{
		prompt_error("cd", NULL, strerror(errno));
	}
	else if (chdir(home_path) == ERROR)
		prompt_error("cd", NULL, strerror(errno));
	return (ft_free(home_path));
}

void	cd(t_node *node)
{
	char	*old_pwd;
	char	*pwd;

	old_pwd = getcwd(0, PATH_MAX);
	if (node->command[1] == NULL)
		cd_home(node);
	else if (chdir(node->command[1]) == ERROR)
		print_error(ft_strdup("cd: "), \
			ft_strjoin(node->command[1], ": No such file or directory\n"), 1);
	pwd = getcwd(0, PATH_MAX);
	node->env = update_env(node->env, "OLDPWD", old_pwd);
	node->env = update_env(node->env, "PWD", pwd);
	ft_free(old_pwd);
	ft_free(pwd);
}