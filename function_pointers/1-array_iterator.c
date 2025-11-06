#include <stdio.h>
#include <stddef.h>  // for size_t

/**
 * array_iterator - Executes a function given as a parameter
 *                  on each element of an integer array.
 * @array: Pointer to the integer array.
 * @size: Number of elements in the array.
 * @action: Pointer to the function to be executed.
 *
 * Return: Nothing (void)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;
    if (array == NULL || action == NULL)
        return;
    for (i = 0; i < size; i++)
        action(array[i]);
}
