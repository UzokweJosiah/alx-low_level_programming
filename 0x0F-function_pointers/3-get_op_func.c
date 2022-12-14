#include "3-calc.h"

/**
 * get_op_func _evaluates passed input to return matching
 * function for the pssed operator
 * Returrn: point to a function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%" ,op_mod},
		{NULL, NULL}
	};
	int i = 0;
	while (i < 5)
	{
		if (*(ops[i].op == *s && s[i] == '\n')
				return (ops[i].f);
		i++;
	}
	return (NULL);
}
