
#ifndef CHECKER_H
# define CHECKER_H

# include "../ft_get_next_line/get_next_line.h"

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
}			t_data;

void	ft_check_r(t_data *data, char *str);
void	ft_check_r_2(t_data *data, char *str);
int		is_sorted(t_data *data);
void	is_equal(t_data *data);
void	is_empty(char *str);
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
void	ft_exit_all(char c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

void	pb(t_data *data);
void	pa(t_data *data);
void	sa(t_data *data);
void	sb(t_data *data);
void	ss(t_data *data);
void	ra(t_data *data);
void	rb(t_data *data);
void	rr(t_data *data);
void	rra(t_data *data);
void	rrb(t_data *data);
void	rrr(t_data *data);

#endif