int kpn(int a, int b, int k)
{
    int d[100001] = {0};
    int s = 0;
    for(int i = 1; i <= 1000000; ++i)
    {
        s = 0;
        for(int j = 1; j * j <= i;++j)
            if(i % j == 0)
        {
            s += j;
            if(j * j < i)
                s += i/j;
        }
        d[i] = s % 2;
    }
    for(int i = a; i <= b;++i)
    {
        if(i % 2 == d[i]) k--;
        if(k == 0) return i;
    }
    return -1;
}
