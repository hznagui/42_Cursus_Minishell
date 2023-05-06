/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 12:17:32 by hznagui           #+#    #+#             */
/*   Updated: 2023/05/06 12:12:02 by hznagui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <fcntl.h>
# include <readline/history.h>
# include <readline/readline.h>
# include <signal.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <unistd.h>

typedef struct t_shell
{
	char			*arg;
	int				tatto;
	struct t_shell	*next;

}					t_list;

typedef struct t_data
{
	int				exec;
	int				count;
	int				check;
	char			*path;
	char			**arg;
}					t_store;

typedef struct env
{
	char *			arg;
	struct env		*next;
}		t_env;

typedef struct data
{
	char **env22;
	char			*input;
	char *strenv;
	char *ret;
	char *strtmp;
	char			**tab;
	char			t;
	int				z;
	int				lock;
	int				lock1;
	size_t			k;
	size_t			length;
	size_t			i;
	size_t x;
	t_list			*p;
	t_list			*tmp1;
	t_env *e;
	t_env *tmp;
}					t_data;

/*parsing function*/
t_list				*ft_lstnew(t_data *a);
t_list				*ft_lstclear(t_list **lst);
void				tato(t_data *a);
char				*str(t_data *a, int *tatto);
void				ft_lstadd_back(t_list **lst, t_list *new);
char				**ft_split22(t_data *a);
char				**free_all22(char **str, int max);
char				*ft_strdup(char *s1);
size_t				ft_strlen(char *s);
char				*ft_substr(char *s, unsigned int start, size_t len);
void	ft_lstadd_back_env(t_env **lst, t_env *new);
t_env	*ft_lstnew_env(char *table);
char	*ft_strjoin22(char *s1, char s2);
void ft_abort(int id);
int ft_check_builtins(t_list *data);
void ft_execute_builtins(t_list *data,t_data *a);
size_t ft_export2(t_data *a,t_list *data,int i);
/*new*/
void				*ft_memcpy(void *dst,const  char *src, int n);
char				**ft_split_cmd(char *s, char c, char *cmd);
char				*ft_getpath(char *cmd);
void				ft_execution(t_list *data, t_store *store,t_data *a);
char				**ft_arg(t_list *data);
void				ft_printerror(char *str, char *cmd);
void				ft_redirect(t_list *data, t_store *store, int i, t_data *a);
void				ft_check_arg(t_list *data, t_store *store);
void				ft_check_next(t_list *data);
int					ft_here_doc(t_list *data, int num, char *line);
int					ft_strcmp2(char *s1, char *s2);

/*GNL*/
char	 			*get_next_line(int fd);
void	 			ft_bzero(void *s, size_t n);
char	 			*ft_strchr( char *s, int c);
void	 			*ft_calloc(size_t count, size_t size);
char	 			*ft_strjoin(char *s1, char *s2, int i, int j);


#endif
