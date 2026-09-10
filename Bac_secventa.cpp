void secventa(int &n)
{
    int p = 10, paul = n;
    while (paul)
    {
        if(paul % 10 == 2 && paul / 10 % 10 == 2)
            n = n / p * p + n % (p / 10);
        paul /= 10;
        p *= 10;
    }
}