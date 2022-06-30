#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*
realloc
*
@ptr:
* @old size:
* @new size:
*
* Return:
* /
void
*_realloc(void *ptr, unsigned int old_size, unsigned
int new_size)
{
char *nptr;
unsigned int i;
if (new_size
== old size)
return (ptr):
if (ptr
== NULL)
{
nptr = malloc(new_size);
if (nptr == NULL)
return (NULL);
return (nptr);
}
else
{
if (new size == 0)
{
free(ptr);
return (NULL);
7
7
nptr = malloc(new_size);
if (nptr == NULL)
return (NULL);
for (i = 0; i
{
< old_size && i < new_size; i++)
nptr[i] = ((char *) ptr)li];
}
free(ptr);
return (nptr);
}
