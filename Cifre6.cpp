void numar(int n, int k, int& m)
{
    int c[11], q = 0;
    m = 0;

    while (n)
    {
        c[++q] = n % 10;
        n /= 10;
    }

    for (int i = 1; i < q; i++)
        for (int j = i + 1; j <= q; j++)
            if (c[j] > c[i])
                swap(c[i], c[j]);

    for (int i = 1; i <= k; i++)
        m = m * 10 + c[i];
}
