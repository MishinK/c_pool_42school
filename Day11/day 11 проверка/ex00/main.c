


		#include <stdio.h>
		#include <stdlib.h>
		#include <string.h>

#include "ft_list.h"
t_list *ft_create_elem(void *data);
int main()
{
	t_list* item = ft_create_elem("asdf");
	printf("%s\n", (char*)item->data);
	printf("%p\n", item->next);
}


