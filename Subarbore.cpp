#include <fstream>

using namespace std;

ifstream in ("subarbore.in");
ofstream out ("subarbore.out");

int n, k, tata[101], viz[101];

void dfs(int nc)
{
    viz[nc]=1;
    for (int i=1; i<=n; i++)
    {
        if (tata[i]==nc)
            dfs(i);
    }
}

int main()
{
    in >> n >> k;
    for (int i=1; i<=n; i++)
        in >> tata[i];
    dfs(k);
    for (int i=1; i<=n; i++)
        if(viz[i])
            out << i << " ";
    return 0;
}