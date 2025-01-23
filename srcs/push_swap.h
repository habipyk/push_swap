
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct t_data
{
	char	*temp;
	int		count;
	int		instant;
	int		size;
	int		i;
	int		*stack_a;
	int		*stack_b;
	int		size_a;
	int		size_b;
	int		*index_steps;
	int		cheapest;
	int		min_a;
	int		min_b;
	int		max_b;
	int		b_i;
}			t_data;

int		ft_strlen(char *str);
char	*ft_combine(int ac, char *av[]);
char	*combnumbers(char *s1, char *s2);
void	num_check(char *str);
void	num_count(char *str, t_data *data);
void	allocate_numbers(char *str, t_data *data);
void	start(char *str, t_data *data);
int		ft_split(char *str, t_data *data);
int		ft_atoi(char *str, t_data *data);
void	get_num(char *str, t_data *data);
void	ft_exit(int errno);

void	pb(t_data *data);
void	pa(t_data *data);
void	sa(t_data *data, int count);
void	sb(t_data *data, int count);
void	ss(t_data *data);
void	ra(t_data *data, int count);
void	rb(t_data *data, int count);
void	rr(t_data *data);
void	rra(t_data *data, int count);
void	rrb(t_data *data, int count);
void	rrr(t_data *data);

void	trio_sort(t_data *data);
void	sort(t_data *data);
void	fi_sort(t_data *data);
int		is_sorted(t_data *data);
int		find_min_a(t_data *data);
int		find_min_b(t_data *data);
int		find_max_b(t_data *data);
void	sorts(t_data *data);
void	f_t_cheapest(t_data	*data);
void	clclt_steps_alios(t_data *data, int i);
void	clclt_steps_max(t_data *data, int i);
int		get_position_number(t_data *data, int num_a);
int		max_position(t_data *data, int *position, int ind);
int		take_cheapest(t_data *data);
void	ft_start(t_data *data);
void	ft_min_sort(t_data *data);
void	ft_rotate_m(t_data *data);
void	ft_rotate_m2(t_data *data);
void	ft_rotate_m3(t_data *data);
void	ft_sort(t_data *data);
void	ft_rotate_o(t_data *data);
void	ft_rotate_o2(t_data *data);
void	ft_rotate_o3(t_data *data);
int		find_number(t_data *data, int nbr);
void	ft_rotate(t_data *data);
int		is_a_sorted(t_data *data);
void	is_equal(t_data *data);
void	is_empty(char *str);

#endif
