int TreiCifImp(int n)
{
    int a[11];
    int ind = 0;
    while(n)
    {
        a[++ind] = n % 10;
        n /= 10;
    }
    for(int i = 2; i < ind; ++i)
        if(a[i] % 2 == 1 && a[i + 1] % 2 == 1 && a[i - 1] % 2 == 1)
            return 1;

    return 0;
}
