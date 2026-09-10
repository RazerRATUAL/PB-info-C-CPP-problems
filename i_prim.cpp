bool prim(int n)
{
    int d = 2, cnt = 1;
    while(n > 1)
    {
        int p = 0;
        while(n % d == 0)
            n/=d, p++;
        cnt *= (p + 1);
        d++;
        if(d * d > n)
            d = n;
    }
    return cnt == 2;
}
int i_prim(int n)
{
    int p1 = n, p2 = n;
    while(!prim(p1))
        p1--;
    while(!prim(p2))
        p2++;
    return p2 - p1;
}
