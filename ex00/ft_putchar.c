#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main()
{
    ft_putchar('3');
    write(1, "\n", 1);
    return (0);
}