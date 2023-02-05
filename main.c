#include <stdio.h>
#include "./libft/Includes/libft.h"

int main()
{
    ft_printf("%s\n", ft_itoa(42));

    int fd;
    int ret;
    char *tab;

    fd = open("test", O_RDONLY);
    if (fd == -1)
    {
        printf("open failed");
        return (0);
    }

    while (tab = get_next_line(fd))
    {
        printf("%s", tab);
        free(tab);
    }
}