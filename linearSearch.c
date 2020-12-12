#include <stdio.h>
#include <stdlib.h>

/* linear seach function where v is a vector, size is the size of vector and element is the element that is sought */
int linearSearch(int* v, int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (v[i] == element)
        {
            return i;
        }
        
    }
    return -1;  
}