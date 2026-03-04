#ifndef ENV_H____
#define ENV_H____

#include <stdlib.h>

/*
The environment 'environ', is a 0-terminated array
of 0-terminated strings, called environment variables.
Each environment variable is of the form name=value.

In Nuttx stdlib.h, environ is a macro to a function that
returns a pointer to the environment; as such it can't be
declared as extern.
-*/
extern char *env_get(const char *);

#endif
