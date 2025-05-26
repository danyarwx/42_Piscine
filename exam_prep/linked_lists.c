/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_lists.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzhukov <dzhukov@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 19:35:37 by dzhukov           #+#    #+#             */
/*   Updated: 2025/05/21 19:39:55 by dzhukov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
struct s_list *next;
void *data;
} t_list;

#include <stdlib.h>

void putstr(int a);

void example(void (*f)(int))
{
	f("str");
}

int main()
{
	t_list *nf;
	t_list ns;
	>>
	<<
	|
	&
	~
	nf = malloc(sizeof(struct s_list));
	nf->data;
	ns.data

}
