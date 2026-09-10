void cifminmax(int n, int& cmax, int& cmic)
{
    cmic = 10;
    cmax = -1;

    do{
        if(n % 10 < cmic)
            cmic = n % 10;
        if(n % 10 > cmax)
            cmax = n % 10;
        n= n / 10;
    }while(n);
}

