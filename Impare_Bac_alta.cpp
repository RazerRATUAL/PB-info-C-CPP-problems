void Impare(int &n)
{
    int m = 0, p = 1;
    while(n)
    {
        if(n % 2 == 1)
            m = m + p*(n % 10 - 1);
        else
            m = m + p *(n % 10);
        n = n / 10;
        p *= 10;
    }
    n = m;
}
