#ifndef _LIST
#define _LIST

#include <stdlib.h>

type struct s_list t_list

struct s_list {
	char *str;
	s_list *next;
}

t_list *add_link(t_list *list, char *str);
void print_list(t_list *list);

#endif
