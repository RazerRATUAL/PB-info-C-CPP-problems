int NrDiv(int n)
{
    int cnt=0;
        for(int i = 1 ; i * i <= n ; ++i)
            {
                    if(n % i == 0)
                    cnt+=2;
                    if(i * i == n)
                    cnt--;
            }
    return cnt;
}

int NextNrDiv(int n)
{
    for(int i = n + 1 ; i ; ++i)
            if(NrDiv(i)==NrDiv(n))
                        return i;
}
int PrevNrDiv(int n)
{
    for(int i = n - 1 ; i >= 1 ; --i)
            if(NrDiv(i)==NrDiv(n))
                        return i;

return -1;
}
