#include <stdio.h>
#include <Python.h>

/**
 * print_python_list - prints some basic info about Python lists
 *
 * @p: Object of python
 *
 * Return: No Return
 */
void print_python_list(PyObject *p)
{
	long int i, sizel, alloc;
	PyObject *item;

	sizel = PyList_Size(p);
	alloc = ((PyListObject *)p)->allocated;

	printf("[*] Python list info\n");

	printf("[*] Size of the Python List = %ld\n", sizel);
	printf("[*] Allocated = %ld\n", alloc);

	for (i = 0; i < sizel; i++)
	{
		item = PyList_GET_ITEM(p, i);
		printf("Element %ld: %s\n", i, ((item)->ob_type)->tp_name);
	}
}
