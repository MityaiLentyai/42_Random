#include <stdlib.h>
#include <stdio.h>

void *ft_calloc(size_t nelem, size_t elsize)
{
    size_t i;
    void *array;
    char *ptr;

    if (nelem == 0 || elsize == 0)
        return (NULL);
    array = malloc(nelem * elsize);
    if (!array)
        return (NULL);
    ptr = (char *)array;

    i = 0;
    while (i < nelem * elsize)
    {
        *(ptr + i) = 0;
        i++;
    }

    return (array);
}

int main()
{

    int *arr = ft_calloc(5, sizeof(int));
    int i = 0;
    while (i < 5)
    {
        printf("%d", arr[i]);
        i++;
    }
    printf("\n");
    return 0;
}