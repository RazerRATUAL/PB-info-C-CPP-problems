int concat(int a, int b)
{
    int cb = b;
    int p = 1;
    while(cb)
    {
        p = p * 10;
        cb /= 10;
    }

    a = a * p + b;
    return a;
}
