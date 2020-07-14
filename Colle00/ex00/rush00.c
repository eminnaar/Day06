#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_print(int a, int b)
{
    if (a == 1 || a == b)
    ft_putchar ('o');
    else
    ft_putchar ('|');
}
void    rush(int x, int y)
{
    int i;
    int j;
    i = 1;
    while (i <= y)
    {
        j = 1;
        while (j <= x)
        {
            if (j == 1 || j == x)
            ft_print(i, y);
            else
            {
                if (i == 1 || i == y)
                    ft_putchar('-');
                else
                    ft_putchar(' ');
            }
            j++;
        }
        i++;
        ft_putchar('\n');
        }
}
int main (void)
{
    rush(5,3);
    return(0);
}