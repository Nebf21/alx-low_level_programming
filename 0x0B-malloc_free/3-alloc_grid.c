#include <stdlib.h>
#include "main.h"
/**
 *alloc_grid - works on m]two dimesional array
 *@width: width of the arry
 *@height:height of the array
 *Return: 0 if Null pointer otherwise
 */
int **alloc_grid(int width, int height)
{
int i = 0, j = 0;
int **p;
if (width <= 0 || height <= 0)
return (NULL);
p = (int **)malloc(sizeof(int *) * height);
if (p == NULL)
{
free(p);
return (NULL);
}
else
{
for (i = 0; i < height; ++i)
{
p[i] = (int *)malloc(sizeof(int) * width);
if (p[i] == NULL)
{
for (j = i; j >= 0; --j)
free(p[j]);
free(p);
return (NULL);
}
}
for (i = 0; i < height; ++i)
{
for (j = 0; j < width; ++j)
{
p[i][j] = 0;
}
}
return (p);
}
}
