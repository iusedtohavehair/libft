#include <unistd.h>
void ft_putnbr_fd(int n, int fd)
{
    char new_digit;

    if (n == -2147483648)
        write(fd, "-2147483648", 11);
    else
    {
        if (n < 0)
        {
            write(fd, "-", 1);
            n = -n;
            ft_putnbr_fd(n, fd);
        }
        else if (n < 10)
        {
            new_digit = n + 48;
            write(fd, &new_digit, 1);
        }
        else
        {
            ft_putnbr_fd(n / 10, fd);
            new_digit = (n % 10) + 48;
            write(fd, &new_digit, 1);
        }
    }
}
