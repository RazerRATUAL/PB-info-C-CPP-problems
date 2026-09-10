
int numarare(int a[], int n)
{
     if(n == 1) return 0;

    int r = numarare(a, n – 1);
        return a[n – 1] == a[n – 2] ? r + 1 : r;
}
