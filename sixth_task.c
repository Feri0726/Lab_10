/* Task description:
Pretty print numbers

Write a function that prints the positive integer received as a parameter in an easy to read format: form groups of three digits and separate them by spaces.
Example: 16 077 216. Test for other values, too: 999, 1000, 12, 0, 1000222.

Hint:
Use recursion, it is the same as printing in base 1000 numeral system.
To printf 3 digits with leading zeros use %03d in the format string.

*/

#include <stdio.h>

void pretty(int n)
{
  if (n >= 1000)
    pretty(n / 1000);
  printf("%d ", n % 1000);
}

int main()
{
  pretty(16121529);

  return 0;
}
