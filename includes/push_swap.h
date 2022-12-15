/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-tolg <fle-tolg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:22:57 by fle-tolg          #+#    #+#             */
/*   Updated: 2022/11/15 12:20:10 by fle-tolg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include  "../libft/libft.h"

long int	ft_atoi_long(const char *str);

int			is_still_chunck(t_db_list *lst, int min, int max);
int			determine_chunck(t_db_list *lst, int min, int max);
int			ft_count_arg(char **str);
int			push_swap(t_db_list *lst_a);
int			db_test_push_swap(t_db_list *lst);
int			ft_find_biggest(t_db_list *lst);
int			ft_find_lowest(t_db_list *lst);
int			ft_find_biggest_num(t_db_list *lst);
int			ft_find_lowest_num(t_db_list *lst);
int			r_or_rr(t_db_list *lst, int num);
int			get_r(t_db_list *lst, int min, int max);
int			last_chunk(int size);
int			total_char_params(char **str);
int			check_arg(char **argv);

char		*cpy_all(char **str);
char		**join_split(char **str);

void		first_algo(t_db_list **lst_a);
void		algo3(t_db_list **lst_a);
void		algo5(t_db_list **lst_a);
void		sort(t_db_list **lst_a);
void		sort(t_db_list **lst_a);
void		use_ra_rra(t_db_list **lst, int min, int max, int i);
void		to_ra(t_db_list **lst_a, int i);
void		to_rb(t_db_list **lst_a, int i);
void		to_rra(t_db_list **lst_a, int i);
void		db_error(t_db_list **lst);
void		db_print_content(t_db_list *lst);
void		sort_last_chunk(t_db_list **lst_a, t_db_list **lst_b);
void		pre_sort(t_db_list **lst_a, t_db_list **lst_b);
void		ft_sa(t_db_list *lst, int i);
void		ft_sb(t_db_list *lst, int i);
void		ft_ss(t_db_list *lst_a, t_db_list *lst_b);
void		ft_pa(t_db_list **lst_a, t_db_list **lst_b);
void		ft_pb(t_db_list **lst_a, t_db_list **lst_b);
void		ft_ra(t_db_list **lst, int i);
void		ft_rb(t_db_list **lst, int i);
void		ft_rr(t_db_list **lst, t_db_list **lst_b);
void		ft_rra(t_db_list **lst, int i);
void		ft_rrb(t_db_list **lst, int i);
void		ft_rrr(t_db_list **lst_a, t_db_list **lst_b);
void		cpy_to_content(t_db_list *lst);

#endif
