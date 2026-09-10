int resturi(int n, int x, int y, int r)
{
    int cmmmc;
    {
        int xx = x;
        int yy = y;
        int rr = x % y;
        while (rr)
        {
            xx = yy;
            yy = rr;
            rr = xx % yy;
        }

        cmmmc = x * y / yy;
    }

    n = (n - r) / cmmmc * cmmmc;

    return 1 + n / cmmmc;
}