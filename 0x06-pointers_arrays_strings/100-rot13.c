#include "main.h"
/**
 *rot13 - eoncode in rotation 13
 *@r: source
 *Return: the encode
 */

char *rot13(char *r)
{
int i, x = 0;
char u[53] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77,
	       78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
	      97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107,
	      108, 109, 110, 111, 112, 113, 114, 115, 116, 117,
	      118, 119, 120, 121, 122};
char s[53] = {78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
	      65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77,
	      'n', 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122,
	      97, 98, 99, 100, 101, 102, 103, 104, 105,
	      106, 107, 108, 109};
while (r[x] != '\0')
{
for (i = 0; i < 53; i++)
{
if (r[x] == u[i])
{
r[x] = s[i];
break;
}
}
x++;
}
return (r);
}
