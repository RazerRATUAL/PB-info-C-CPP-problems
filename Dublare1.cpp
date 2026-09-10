void dublare1(int& x)
{
    int aux = x, nr = 1;

    while (aux >= 10)
    {
        aux /= 10;
        nr *= 10;
    }
    x = aux * (nr * 10) + x;
}
