//#include "ft.h"
typedef struct s_stock_par
{
    int size_param;
    char *str;
    char *copy;
    char **tab;
}            t_stock_par;
int    ft_strlen(char *str)
{
    int n;

    n = 0;
    while (*str != '\0')
    {
        n++;
        str++;
    }
    return (n);
}
struct s_stock_par *ft_param_to_tab(int ac, char **av)
{
    t_stock_par *obj;
    int i;
    int j;

    obj = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac - 1));
    i = 1;
    j = 0;
    while (i < ac)
    {
        obj[i-1].size_param = ft_strlen(av[i]);
        obj[i-1].str = av[i];

        i++;
    }

    return (obj);
}

int mymain(int argc, char **argv)
{
    t_stock_par *test;

    if(argc > 1)
    {
        test = ft_param_to_tab(argc,argv);
    }
}
int main()
{
  char* arr[5] = {"NO", "YES", "ARG2", "ARG3"};
    
    mymain(5,arr);
    return 0;
}
