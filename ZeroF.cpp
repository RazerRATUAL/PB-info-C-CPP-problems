int zerof(int n)
{
    int zerof = 0;

    while (n)
    {
        zerof += (n / 5);

        n /= 5;
    }

    return zerof;
}
