/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolaleka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 09:40:47 by bolaleka          #+#    #+#             */
/*   Updated: 2019/09/17 15:15:28 by bolaleka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H

# include "libft/includes/libft.h"
# include <dirent.h>
# include <grp.h>
# include <pwd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <time.h>
# include <sys/xattr.h>
# include <sys/acl.h>
# include <sys/ioctl.h>
# include <uuid/uuid.h>
# include <limits.h>
# include <errno.h>

enum	{ERRNO, USAGE, MALL_ERR};
typedef struct stat		t_stat;

# define FLAG_L 2
# define FLAG_1 128
# define FLAG_BR 4
# define FLAG_R 8
# define FLAG_A 1
# define FLAG_D 32
# define FLAG_S 512
# define FLAG_T 16
# define FLAG_BS 256
# define POS(x, y) (((x) > (y)) ? (x) : (y))

typedef	struct		s_elem
{
	time_t			time;
	long			ntime;
	mode_t			st_mode;
	nlink_t			st_nlink;
	uid_t			st_uid;
	gid_t			st_gid;
	off_t			size;
	blkcnt_t		st_blocks;
	dev_t			st_rdev;
	struct s_elem	*next;
	char			*name;
	char			full_path[PATH_MAX];
}					t_elem;

t_elem				*lst_swap(t_elem *a, t_elem *b);
t_elem				*rev_lst(t_elem *lst);
char				*get_mod(char chmod[12], int mode, char path[PATH_MAX]);
int					print_err(char *s, int error);
int					free_folder(t_elem **lst);
int					disp_all_content(t_elem *begin,
		int flags, int first, int n);
int					get_sort(t_elem **begin, short flags);
int					get_info(char path[PATH_MAX], char *name, t_elem **lst);
void				print_links(int nbr, int *maxs);
void				print_device(int device, int *maxs);
void				print_groups(t_elem *file, int	*maxs);
void				print_size(int size, int *maxs);
void				display_lst(t_elem *lst, int flags);
int					display_ls(t_elem **lst, int flags);
int					display_long_ls(t_elem *lst, int flags);
int					get_file_perm(t_elem *file, int size[7], int flags);
t_elem				*valid_file(char **names_list, int ac, int first);
int					display_opts(int ac, char **av, int *flags);
int					make_lst(t_elem *lst, int flags);
int					block_size(t_elem *lst, int *total);
void				ft_readlink(t_elem *file);

#endif
