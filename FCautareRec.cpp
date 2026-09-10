int cautare(int n , double a[] , double v)
{
    int k = -1;
    for(int i = 0 ; i < n ; ++i)
    {
        if(a[i]==v)
        k=i;
    }
    return k;
}
