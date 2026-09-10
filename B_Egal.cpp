int Egal(int n)
{
    int imp = 0;
    while(n != 0 && imp == 0)
    {
        if(n % 2 == 1)
            imp = n % 10;
        n = n / 10;
    }

    while(n)
    {
        if(n % 2 == 1 && n % 10 != imp)
            return 0;
        n = n / 10;
    }
    return 1;
}
