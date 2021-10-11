void	ft_striteri(char *s, void (*f)(unsigned int, char *s))
{
    unsigned int i;

    if(s)
    {
        i = 0;
        while (s[i])
        {
            f(i, &s[i]);
            i++;
        }
    }
}