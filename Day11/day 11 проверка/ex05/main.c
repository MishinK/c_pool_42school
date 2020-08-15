


		#include <stdio.h>
		#include <stdlib.h>
		#include <string.h>

	

	#include "ft_list.h"
t_list *ft_list_push_params(int ac, char **av);
t_list* ft_create_elem(void* data)
{
	t_list* item = malloc(sizeof(t_list));
	item->next = NULL;
	item->data = data;
	return (item);
}
#define CE(data) ft_create_elem(data)
#define CL(list) crap_a_list(list)
void crap_a_list(t_list* list)
{
	for (; list != 0; list = list->next)
		printf("%s,", (char*)list->data);
	printf("\n");
}
int main(int argc, char** argv)
{
	t_list* list = ft_list_push_params(argc, argv);
	CL(list);
}


