#include <unistd.h>

void ft_is_negative(int n)
{
    if (n < 0)
    {
        write(1, "N", 1);
    }
    else
    {
        write(1, "P", 1);
    }
}

int main()
{
    int m = -1;
    ft_is_negative(m);
    write(1, "\n", 1);
    return (0);
}