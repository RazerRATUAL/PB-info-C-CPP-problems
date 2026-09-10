void sum_div(int& n, int& s)
{
    for (int i = 1;i <= n; i++)
        if (n % i == 0)
        s += i;
}
