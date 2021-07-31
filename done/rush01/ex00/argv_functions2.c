#include "argv_functions.h"

void	replace_space(char **rabbit)
{
	while (**rabbit && **rabbit == ' ')
	{
		**rabbit = '\0';
		++(*rabbit);
	}
	--(*rabbit);
}
