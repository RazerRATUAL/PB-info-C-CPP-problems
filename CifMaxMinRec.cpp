int cnt = 0;
int cifmaxmin(int n, int& maxi, int& mini)
{
    if(n == 0 && cnt == 0)
        maxi = 0, mini = 0;
    else if(n == 0)
        maxi = 0, mini = 9;
    else{
        cnt++;
        int c = n % 10;
        cifmaxmin(n/10, maxi, mini);
        if(c > maxi)
            maxi = c;
        if(c < mini)
            mini = c;
    }
}
